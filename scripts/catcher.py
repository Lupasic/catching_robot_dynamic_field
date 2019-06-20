import cv2
import urx
import numpy as np
import time
import math3d as m3d
from kalman_data import *
import rospy
from geometry_msgs.msg import Point


class Catcher:
    def __init__(self):
        rospy.Subscriber( "red_ball_xyz", Point, self.callback )
        self.tracker = Kalman()
        self.ac = 4
        self.v = 2
        self.x_catch = np.array( [ [ 0. ],
                                   [ 0. ],
                                   [ 0.2 ] ] )

        self.robot = urx.Robot( "192.168.1.2", use_rt=True )
        time.sleep( 1 )

        self.trans = self.robot.get_pose()
        self.robot_init()
        self.prev_time = time.time()
        print( "ready" )

    def __del__(self):
        self.robot.close()

    def callback(self, data):
        clb_s = time.time()
        x = data.x
        y = data.y
        z = data.z
        print( data )
        act_time = time.time()
        dt = act_time - self.prev_time
        #print(dt)
        self.prev_time = act_time
        img = np.zeros( (500, 1000, 3), np.uint8 )
        trajectory = self.tracker.trajectory_identification( x, y, z, dt )
        if trajectory.any():
            pr_x = self.predict_catch_point( trajectory, 0.2 )
            if pr_x.any():
                d = np.linalg.norm( pr_x - self.x_catch )
                if d > 0.04 and self.coord_valid( pr_x ) == True:
                    self.x_catch = pr_x
                    self.trans.pos.x = pr_x[ 0 ][ 0 ]
                    self.trans.pos.y = pr_x[ 1 ][ 0 ]
                    self.trans.pos.z = pr_x[ 2 ][ 0 ]
                    self.robot.set_pose( self.trans, acc=self.ac, vel=self.v, wait=False, threshold=0.1 )
            xx = trajectory[ 0 ]
            dxx = trajectory[ 1 ]
            yy = trajectory[ 2 ]
            dyy = trajectory[ 3 ]
            zz = trajectory[ 4 ]
            dzz = trajectory[ 5 ]

            cv2.circle( img, (int( x * 100 ), int( -100 * z ) + 600), 5, (0, 0, 255), 2 )
            cv2.circle( img, (int( y * 100 ) + 500, int( -100 * z ) + 500), 5, (0, 0, 255), 2 )

            for i in range( 300 ):
                xxx = int( (xx + dxx * i * 0.005) * 100 )
                yyy = int( (yy + dyy * i * 0.005) * 100 + 500 )
                zzz = int( -(zz + dzz * i * 0.005 - 9.8 / 2 * (0.005 * i) ** 2) * 100 + 500 )
                cv2.circle( img, (xxx, zzz), 5, (255, 0, 0), 2 )
                cv2.circle( img, (yyy, zzz), 5, (255, 0, 0), 2 )

            cv2.imshow( 'Frame', img )
            cv2.waitKey( 1 )
        print(time.time() - clb_s)

    def robot_init(self):
        self.trans.pos.x = 0.0
        self.trans.pos.y = 0.4
        self.trans.pos.z = 0.2
        self.trans.orient = np.zeros( (3, 3) )
        self.trans.orient[ 0 ][ 0 ] = -1.
        self.trans.orient[ 1 ][ 2 ] = 1.
        self.trans.orient[ 2 ][ 1 ] = 1.
        self.robot.set_pose( self.trans, acc=self.ac, vel=self.v, wait=True )
        time.sleep( 1 )

    def coord_valid(self, x):
        if x[ 0 ][ 0 ] < -0.4 or x[ 0 ][ 0 ] > 0.4: return False
        if x[ 1 ][ 0 ] < 0.2 or x[ 1 ][ 0 ] > 1: return False
        return True

    def predict_catch_point(self, X, z_d):
        x_p = np.array( [ [ 0. ],
                          [ 0. ],
                          [ z_d ] ] )

        t_f = -(-X[ 5 ][ 0 ] - np.sqrt( X[ 5 ][ 0 ] ** 2 + 2 * 9.8 * (X[ 4 ][ 0 ] - z_d) )) / 9.8
        x_p[ 0 ][ 0 ] = X[ 0 ][ 0 ] + X[ 1 ][ 0 ] * t_f
        x_p[ 1 ][ 0 ] = X[ 2 ][ 0 ] + X[ 3 ][ 0 ] * t_f
        if t_f < 0: return np.array( [ [ ] ] )
        return x_p


rospy.init_node( 'listener', anonymous=True )
catcher = Catcher()
try:
    rospy.spin()
except KeyboardInterrupt:
    print( "Shutting down" )



