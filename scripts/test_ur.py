#!/usr/bin/env python

import time

import numpy as np
import urx

robot = urx.Robot("192.168.1.2", use_rt=True)
ac = 0.1
v = 0.1

for i in range(1):
    time.sleep(1)
    trans = robot.get_pose()
    # robot.up(5)
    print(trans)
    trans.pos.x = 0.0
    trans.pos.y = 0.6
    trans.pos.z = 0.0
    trans.orient = np.zeros((3, 3))
    trans.orient[0][0] = -1.
    trans.orient[1][2] = 1.
    trans.orient[2][1] = 1.
    robot.set_pose(trans, acc=ac, vel=v, wait=False)
    time.sleep(1)
    '''
    print( robot.get_pos() )
    trans = robot.get_pose()
    trans.pos.x = 0.4358
    trans.pos.y = 1.00879
    trans.pos.z = 0.23495
    robot.set_pose( trans, acc=ac, vel=v, wait=False  )
    time.sleep( 1 )
    print(robot.get_pos())
    trans = robot.get_pose()
    trans.pos.x = -0.4358
    trans.pos.y = 1.00879
    trans.pos.z = 0.23495
    robot.set_pose( trans, acc=ac, vel=v, wait=False  )
    time.sleep( 1 )
    print( robot.get_pos() )
    print( robot.get_pos() )
    trans = robot.get_pose()
    trans.pos.x = -0.4358
    trans.pos.y = 0.40879
    trans.pos.z = 0.23495
    robot.set_pose( trans, acc=ac, vel=v, wait=False )
    time.sleep( 1 )
    print( robot.get_pos() )'''
robot.close()
