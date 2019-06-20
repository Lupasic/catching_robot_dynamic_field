#!/usr/bin/env python

import time

import numpy as np
import rospy
from geometry_msgs.msg import Point

pub = rospy.Publisher('red_ball_xyz', Point, queue_size=10)
rospy.init_node('talker', anonymous=True)
rate = rospy.Rate(30)  # 10hz
g = -9.8
start_time = time.time()
prev_time = start_time

X = np.array([[0.1],
              [0.0],
              [6.4],
              [-3.],
              [0.1],
              [9.5]])

while not rospy.is_shutdown():
    act_time = time.time()
    dt = act_time - prev_time
    print(dt)
    prev_time = act_time
    X[0][0] += X[1][0] * dt
    X[2][0] += X[3][0] * dt
    X[4][0] += X[5][0] * dt + g * dt ** 2 / 2
    X[5][0] += g * dt
    if act_time - start_time > 2.5: break
    current_point = Point(X[0][0], X[2][0], X[4][0])
    pub.publish(current_point)

    rate.sleep()
