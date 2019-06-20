#!/usr/bin/env python

import cv2
import numpy as np
import rospy
from geometry_msgs.msg import Point

pub = rospy.Publisher('pixel_from_camera', Point, queue_size=10)
rospy.init_node('red_ball_tracker', anonymous=True)
rate = rospy.Rate(50)  # 10hz

cap = cv2.VideoCapture(0)

# Check if camera opened successfully
if (cap.isOpened() == False):
    print("Error opening video stream or file")

sub_back = cv2.createBackgroundSubtractorMOG2(500, 16, 0)

while not rospy.is_shutdown() and (cap.isOpened()):
    # Capture frame-by-frame
    ret, frame_or = cap.read()
    if ret == True:
        frame = frame_or.copy()
        foreground = sub_back.apply(frame)

        lower_red = np.array([30, 150, 100])
        upper_red = np.array([255, 255, 180])
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
        mask = cv2.inRange(hsv, lower_red, upper_red)
        ball = cv2.bitwise_and(foreground, foreground, mask=mask)
        forground = cv2.bitwise_and(frame, frame, mask=ball)

        im, contours, hierarchy = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        # jgcv2.drawContours( frame, contours, -1, (255, 0, 0), 3 )
        if contours:
            ball_cont = max(contours, key=lambda obj: cv2.contourArea(obj))
            x, y, w, h = cv2.boundingRect(ball_cont)

            if cv2.contourArea(ball_cont) > 500:
                cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
            current_point = Point(x + w / 2, y + h / 2, 0)
            pub.publish(current_point)

        cv2.imshow('Frame', frame)
        # Press Q on keyboard to  exit
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    # Break the loop
    else:
        break
    rate.sleep()

# When everything done, release the video capture object
cap.release()

# Closes all the frames
cv2.destroyAllWindows()
