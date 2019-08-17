#!/usr/bin/env python

import cv2
import numpy as np
import time
import math3d as m3d
from kalman_data import *
import rospy
from geometry_msgs.msg import Point, PointStamped
import threading
# from sensor_msgs.msg import Image
# uncomment pubim for debugging
import cv_bridge


bridge = cv_bridge.CvBridge()
# pubim = rospy.Publisher('frame', Image, queue_size=1)


class Predicter:
    def __init__(self):
        rospy.Subscriber("red_ball_xyz", PointStamped, self.callback)
        self.pub = rospy.Publisher('catch_point', Point, queue_size=10)
        self.tracker = Kalman()
        self.x_catch = np.array([[0.],
                                 [0.],
                                 [0.3]])

        self.prev_time = time.time()
        self.mutex = threading.Lock()
        print("ready")

    def callback(self, data):
        global bridge, pubim
        if self.mutex.acquire(False) is False:

            clb_s = time.time()
            x = data.point.x
            y = data.point.y
            z = data.point.z
            act_time = time.time()
            dt = act_time - self.prev_time
            print(dt)
            self.prev_time = act_time
            # img = np.zeros((500, 1000, 3), np.uint8)
            trajectory = self.tracker.trajectory_identification(x, y, z, dt)
            print("1", time.time() - act_time)
            if trajectory.any():
                pr_x = self.predict_catch_point(trajectory, 0.3)
                if pr_x.any():
                    print(pr_x)
                    d = np.linalg.norm(pr_x - self.x_catch)
                    if d > 0.05 and self.coord_valid(pr_x) is True:
                        catch_point = Point(pr_x[0][0], pr_x[1][0], pr_x[2][0])
                        print(catch_point)
                        print("2", time.time() - act_time)
                        self.pub.publish(catch_point)
                xx = trajectory[0]
                dxx = trajectory[1]
                yy = trajectory[2]
                dyy = trajectory[3]
                zz = trajectory[4]
                dzz = trajectory[5]

                # cv2.circle(img, (int(x * 100), int(-100 * z) + 500),
                           # 5, (0, 0, 255), 2)
                # cv2.circle(img, (int(y * 100) + 500,
                                 # int(-100 * z) + 500), 5, (0, 0, 255), 2)

                for i in range(100):
                    xxx = int((xx + dxx * i * 0.005) * 100)
                    yyy = int((yy + dyy * i * 0.005) * 100 + 500)
                    zzz = int(-(zz + dzz * i * 0.005 - 9.8 /
                                2 * (0.005 * i) ** 2) * 100 + 500)
                    # cv2.circle(img, (xxx, zzz), 5, (255, 0, 0), 2)
                    # cv2.circle(img, (yyy, zzz), 5, (255, 0, 0), 2)

                # cv2.imshow( 'Frame', img )
                # pubim.publish(bridge.cv2_to_imgmsg(img, "rgb8"))
                # cv2.waitKey( 1 )
            #print(time.time() - clb_s)
            self.mutex.release()
        # else:
            # print("block")

    def coord_valid(self, x):
        if x[0][0] < -0.6 or x[0][0] > 0.6:
            return False
        if x[1][0] < 0.4 or x[1][0] > 1.1:
            return False
        return True

    def predict_catch_point(self, X, z_d):
        x_p = np.array([[0.],
                        [0.],
                        [z_d]])

        t_f = -(-X[5][0] - np.sqrt(X[5][0] ** 2 +
                                   2 * 9.8 * (X[4][0] - z_d))) / 9.8
        x_p[0][0] = X[0][0] + X[1][0] * t_f
        x_p[1][0] = X[2][0] + X[3][0] * t_f
        if t_f < 0:
            return np.array([[]])
        return x_p


rospy.init_node('listener', anonymous=True)
predicter = Predicter()
try:
    rospy.spin()
except KeyboardInterrupt:
    print("Shutting down")
