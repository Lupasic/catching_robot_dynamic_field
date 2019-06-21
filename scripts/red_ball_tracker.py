#!/usr/bin/env python


import cv_bridge
import cv2
import numpy as np
import rospy
from geometry_msgs.msg import Point
from sensor_msgs.msg import Image

# uncomment pubim for debugging

pub = rospy.Publisher('pixel_from_camera', Point, queue_size=3)
# pubim = rospy.Publisher('im_from_myau', Image, queue_size=3)
cv_image = None
bridge = cv_bridge.CvBridge()

def imageCallack(data):
    global pub, cv_image, bridge,pubim
    frame = bridge.imgmsg_to_cv2(data, desired_encoding="passthrough")

    sub_back = cv2.createBackgroundSubtractorMOG2(500, 16, 0)
    foreground = sub_back.apply(frame)

    lower_red = np.array([30, 150, 100])
    upper_red = np.array([255, 255, 180])
    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    mask = cv2.inRange(hsv, lower_red, upper_red)
    ball = cv2.bitwise_and(foreground, foreground, mask=mask)

    im, contours, hierarchy = cv2.findContours(ball, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    if contours:
        ball_cont = max(contours, key=lambda obj: cv2.contourArea(obj))
        x, y, w, h = cv2.boundingRect(ball_cont)

        if cv2.contourArea(ball_cont) > 500:
            cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
        current_point = Point(x + w / 2, y + h / 2, 0)

        # pubim.publish(bridge.cv2_to_imgmsg(frame, "rgb8"))
        pub.publish(current_point)



if __name__ == '__main__':
    rospy.init_node('red_ball_tracker', anonymous=True)

    rospy.Subscriber("/camera/color/image_raw", Image, imageCallack)

    rospy.spin()