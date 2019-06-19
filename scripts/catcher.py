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

    def __del__(self):
        self.robot.close()

    def callback(self, data):
        x = data.x
        y = data.y
        z = data.z

        act_time = time.time()
        dt = act_time - self.prev_time
        self.prev_time = act_time

        trajectory = tracker.trajectory_identification( x, y, z, dt )
        if trajectory.any():
            pr_x = self.predict_catch_point( trajectory, 0.2 )
            d = np.linalg.norm( pr_x - self.x_catch )
            if d > 0.04 and self.coord_valid( pr_x ) == True:
                self.x_catch = pr_x
                self.trans.pos.x = pr_x[ 0 ][ 0 ]
                self.trans.pos.y = pr_x[ 1 ][ 0 ]
                self.trans.pos.z = pr_x[ 2 ][ 0 ]
                self.robot.set_pose( self.trans, acc=self.ac, vel=self.v, wait=False, threshold=0.1 )

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

    def coord_valid(self,x):
        if x[ 0 ][ 0 ] < -0.5 or x[ 0 ][ 0 ] > 0.5: return False
        if x[ 1 ][ 0 ] < 0 or x[ 1 ][ 0 ] > 1: return False
        return True

    def predict_catch_point(self, X, z_d):
        x_p = np.array( [ [ 0. ],
                          [ 0. ],
                          [ z_d ] ] )

        t_f = -(-X[ 5 ][ 0 ] - np.sqrt( X[ 5 ][ 0 ] ** 2 + 2 * 9.8 * (X[ 4 ][ 0 ] - z_d) )) / 9.8
        x_p[ 0 ][ 0 ] = X[ 0 ][ 0 ] + X[ 1 ][ 0 ] * t_f
        x_p[ 1 ][ 0 ] = X[ 2 ][ 0 ] + X[ 3 ][ 0 ] * t_f
        return x_p


tracker = Kalman()

rospy.init_node( 'listener', anonymous=True )
catcher = Catcher()
try:
    rospy.spin()
except KeyboardInterrupt:
    print( "Shutting down" )



