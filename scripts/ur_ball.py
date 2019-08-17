#!/usr/bin/env python

import numpy as np
import urx
import time

time.sleep(0.2)
robot = urx.Robot("192.168.1.2", use_rt=True)
time.sleep(1)
ac = 0.5
v = 0.5

init_x = 0.1
init_y = 0.9
init_z = 0.6
init_rx = 1.2
init_ry = 1.2
init_rz = 1.2
init_orient = np.zeros((3, 3))
init_orient[1][0] = 1.0
init_orient[2][1] = 1.0
init_orient[0][2] = 1.0

p1_x = 0.2
p1_y = 1
p1_z = 0.4
p1_orient = np.zeros((3, 3))
p1_orient[0][0] = -1.
p1_orient[1][2] = 1.
p1_orient[2][1] = 1.

p2_x = -0.4
p2_y = 0.7
p2_z = 0.1
p2_orient = np.zeros((3, 3))
p2_orient[0][0] = -1.
p2_orient[1][2] = 1.
p2_orient[2][1] = 1.


trans = robot.get_pose()
trans.pos.x = p1_x
trans.pos.y = p1_y
trans.pos.z = p1_z
trans.orient = init_orient
robot.set_pose(trans, acc=ac, vel=v, wait=False)
while True:
    time.sleep(0.1)
    if not robot.is_program_running():
        break

time.sleep(3)

for i in range(1):
    trans = robot.get_pose()
    # print(trans)
    trans.pos.x = p1_x
    trans.pos.y = p1_y
    trans.pos.z = p1_z
    trans.orient = p1_orient
    robot.set_pose(trans, acc=ac, vel=v, wait=False)
    while True:
        # sleep first since the robot may not have processed the command yet
        time.sleep(0.1)
        if not robot.is_program_running():
            break

    trans = robot.get_pose()
    # print(trans)
    trans.pos.x = p2_x
    trans.pos.y = p2_y
    trans.pos.z = p2_z
    trans.orient = p2_orient
    robot.set_pose(trans, acc=ac, vel=v, wait=False)
    while True:
        # sleep first since the robot may not have processed the command yet
        time.sleep(0.1)
        if not robot.is_program_running():
            break

    trans = robot.get_pose()
    # print(trans)
    trans.pos.x = p1_x
    trans.pos.y = p1_y
    trans.pos.z = p1_z
    trans.orient = p1_orient
    robot.set_pose(trans, acc=ac, vel=v, wait=False)
    while True:
        # sleep first since the robot may not have processed the command yet
        time.sleep(0.1)
        if not robot.is_program_running():
            break

robot.close()
