#!/usr/bin/env python

import time

import cv2
import numpy as np
import rospy
import urx
from geometry_msgs.msg import Point
from kalman_data import *
import threading
import math3d as m3d

class Catcher:
    def __init__(self):
        rospy.Subscriber( "catch_point", Point, self.callback )
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
        self.lock = threading.Lock()
        print( "ready" )
        self.n = 0

    def __del__(self):
        self.robot.close()

    def callback(self, data):
        self.n +=1
        if self.n > 3:#self.lock.acquire(False) == False and
            print("good",self.n)
            self.trans.pos.x = data.x
            self.trans.pos.y = data.y-0.08
            self.trans.pos.z = data.z
            self.robot.set_pose( self.trans, acc=self.ac, vel=self.v, wait=True)
            #self.lock.release()
        else:
            print("block",self.n)

    def robot_init(self):
        self.trans.pos.x = 0.1
        self.trans.pos.y = 0.4
        self.trans.pos.z = 0.2
        self.trans.orient = np.zeros( (3, 3) )
        self.trans.orient[ 0 ][ 0 ] = -1.
        self.trans.orient[ 1 ][ 2 ] = 1.
        self.trans.orient[ 2 ][ 1 ] = 1.
        self.robot.set_pose( self.trans, acc=self.ac, vel=self.v, wait=True )
        time.sleep( 1 )

rospy.init_node( 'listener', anonymous=True )
catcher = Catcher()
try:
    rospy.spin()
except KeyboardInterrupt:
    print( "Shutting down" )



