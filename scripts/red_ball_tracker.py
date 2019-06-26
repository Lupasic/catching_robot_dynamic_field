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

cv_image = None
bridge = cv_bridge.CvBridge()
bridge1 = cv_bridge.CvBridge()

min_area = 10
max_area = 1000
first = None

def imageCallack(data):
    global pub, pixel_depth, bridge, pubim, first
    if cv_image is not None and K is not None:
        frame = bridge.imgmsg_to_cv2(data, desired_encoding="passthrough")

        if first is None:
            first = frame
        # rospy.loginfo("raw_start")
        # act = time.time()

        sub1 = cv2.subtract(frame, first)
        sub2 = cv2.subtract(first, frame)
        dif = cv2.add(sub1, sub2)
        dif = cv2.cvtColor(dif, cv2.COLOR_BGR2GRAY)

        s, dif = cv2.threshold(dif, 20, 255,cv2.THRESH_BINARY)

        contours, hierarchy = cv2.findContours(dif, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
        # print(time.time() - act)
        # rospy.loginfo("raw_end")
        if contours:
            cnt = max(contours, key = cv.contourArea)   
            if cv.contourArea(cnt) > min_area and cv.contourArea(cnt) < max_area:
                x,y,w,h = cv.boundingRect(cnt)
                # print(x, y, w, h)
                cv.rectangle(original, (x,y), (x+w,y+h), (0,255,0), 1)
                # Find center of a bounding rectangle
                cont_center = (int(x+w/2), int(y+h/2))
                pixel_depth = float(cv_image[int(cont_center[1])][int(cont_center[0])]) * 0.001

                transform_to_point(cont_center, pixel_depth)
                pubim.publish(bridge.cv2_to_imgmsg(frame, "rgb8"))

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
    rospy.Subscriber("/camera/color/image_raw", Image, imageCallack, queue_size=1)

    rospy.spin()