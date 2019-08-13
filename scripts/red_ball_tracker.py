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

flag = 0

K= None
cv_image = None
first = None
bridge = cv_bridge.CvBridge()
bridge1 = cv_bridge.CvBridge()



depth_roi = [100,100]
depth_step = 1


def imageCallack(data):
    global pub, pixel_depth, bridge,pubim, sub_back, lower_red, upper_red, region, depth_step, K, first, flag
    # if cv_image is not None and K is not None:
    if cv_image is not None and K is not None:
        # Reduce blue hren'
        if flag < 150:
            flag += 1
            return

        frame = bridge.imgmsg_to_cv2(data, desired_encoding="passthrough")
        if first is None:
            first = frame
        sub1 = cv2.subtract(frame, first)
        sub2 = cv2.subtract(first, frame)
        dif = cv2.add(sub1, sub2)

        dif = cv2.cvtColor(dif, cv2.COLOR_BGR2GRAY)

        s, dif = cv2.threshold(dif, 20, 255, cv2.THRESH_BINARY)
        _, contours, hierarchy = cv2.findContours(
            dif, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)

        if len(contours) != 0:
            cnt = max(contours, key=cv2.contourArea)
            if cv2.contourArea(cnt) > 10 and cv2.contourArea(cnt) < 500:
                print(cv2.contourArea(cnt))
                x, y, w, h = cv2.boundingRect(cnt)
                # print(x, y, w, h)
                # Find center of a bounding rectangle
                current_point = Point(x + w / 2, y + h / 2, 0)
                pixel_depth = float(cv_image[int(current_point.y)][int(current_point.x)]) * 0.001
                transform_to_point(current_point, pixel_depth)

                cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
                pubim.publish(bridge.cv2_to_imgmsg(frame, "rgb8"))
                # pubim.publish(bridge.cv2_to_imgmsg(dif, "mono8"))



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
    # rospy.Subscriber("/camera/color/camera_info", CameraInfo, cameraCallback)
    rospy.Subscriber("/camera/color/image_raw", Image, imageCallack, queue_size=1)

    rospy.spin()