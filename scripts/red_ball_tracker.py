#!/usr/bin/env python


import cv_bridge
import cv2
import numpy as np
import time
import rospy
from geometry_msgs.msg import Point, PointStamped
from sensor_msgs.msg import Image, CameraInfo
# uncomment pubim for debugging

pub = rospy.Publisher('camera_pixel_to_camera_obj', PointStamped, queue_size=1)
pubim = rospy.Publisher('im_from_myau', Image, queue_size=1)

K= None
cv_image = None
bridge = cv_bridge.CvBridge()
bridge1 = cv_bridge.CvBridge()
sub_back = cv2.createBackgroundSubtractorMOG2()
lower_red = np.array([110, 21, 37])
upper_red = np.array([255, 255, 255])


depth_roi = [100,100]
depth_step = 1


def imageCallack(data):
    global pub, pixel_depth, bridge,pubim, sub_back, lower_red, upper_red, region, depth_step, K
    # if cv_image is not None and K is not None:
    if K is not None:
        frame = bridge.imgmsg_to_cv2(data, desired_encoding="passthrough")
        # rospy.loginfo("raw_start")
        # act = time.time()

        #act = time.time()

        #fgmask = sub_back.apply(frame)
        #kernel = np.ones((3, 3), np.uint8)
        #opening = cv2.morphologyEx(fgmask, cv2.MORPH_OPEN, kernel)
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
        mask = cv2.inRange(hsv, lower_red, upper_red)

        kernel = np.ones((3, 3), np.uint8)
        opening = cv2.morphologyEx(mask, cv2.MORPH_OPEN, kernel)
        im, contours, hierarchy = cv2.findContours(opening, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        # print(time.time() - act)
        # print("0",time.time())
        # rospy.loginfo("raw_end")
        if contours:
            ball_cont = max(contours, key=lambda obj: cv2.contourArea(obj))
            x, y, w, h = cv2.boundingRect(ball_cont)

            if cv2.contourArea(ball_cont) > 270 and cv2.contourArea(ball_cont) < 1000:
                print(cv2.contourArea(ball_cont))
                cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
                current_point = Point(x + w / 2, y + h / 2, 0)
                min_pix_depth = 1000000
                for i in range(int(current_point.y)- depth_roi[0]/2,int(current_point.y)+ depth_roi[0]/2, depth_step):
                    for i in range(int(current_point.x) - depth_roi[1]/ 2, int(current_point.x) + depth_roi[1] / 2, depth_step):
                        pixel_depth = float(cv_image[int(current_point.y)][int(current_point.x)]) * 0.001
                        if pixel_depth < min_pix_depth:
                            min_pix_depth = pixel_depth

                rw = 7.0
                fl = 505.0
                ow = ((w + h)/2.0)
                z_dist = (fl * rw *  0.01) / ow
                # fl = (((w + h)/2) * 252.5) / rw
                # print(fl, K[0])
                print("1",time.time())


                # pixel_depth = float(cv_image[int(current_point.y)][int(current_point.x)]) * 0.001
                # print(hsv[:][y + h / 2][x + w / 2])
                # print(cv2.contourArea(ball_cont))
                # transform_to_point(current_point,pixel_depth)
                transform_to_point(current_point,min_pix_depth)
                # transform_to_point(current_point, z_dist)
                pubim.publish(bridge.cv2_to_imgmsg(frame, "rgb8"))
            else:
                cv2.rectangle(frame, (250, 650), (370,370), (0, 0, 255), 10)
        else:
                cv2.rectangle(frame, (250, 650), (370,370), (0, 0, 255), 10)
        cv2.imshow('Frame1', frame)
        cv2.waitKey(1)

def imageCallackDepth(data):
    global bridge1, cv_image
    # rospy.loginfo("camera_depth")

    cv_image = bridge1.imgmsg_to_cv2(data, desired_encoding="passthrough")


def cameraCallback(data):
    global K
    K = data.K

def transform_to_point(data, pixel_depth):
    global cv_image
    point_stamped = PointStamped()
    point_stamped.header.stamp = rospy.Time.now()
    point_stamped.header.frame_id = "camera_color_optical_frame"
    point_stamped.point.x = pixel_depth * ((data.x - K[2]) * (1 / K[0]))
    point_stamped.point.y = pixel_depth * ((data.y - K[5]) * (1 / K[4]))
    point_stamped.point.z = pixel_depth
    cv_image = None
    pub.publish(point_stamped)

if __name__ == '__main__':
    rospy.init_node('red_ball_tracker', anonymous=True)
    rospy.Subscriber("/camera/aligned_depth_to_color/image_raw", Image, imageCallackDepth, queue_size=1)
    rospy.Subscriber("/camera/aligned_depth_to_color/camera_info", CameraInfo, cameraCallback)
    rospy.Subscriber("/camera/color/camera_info", CameraInfo, cameraCallback)
    rospy.Subscriber("/camera/color/image_raw", Image, imageCallack, queue_size=1)

    rospy.spin()