#!/usr/bin/env python

import cv2
import numpy as np


class Kalman:
    def __init__(self):
        self.dt = 0.01

        self.flag_init_data = 0
        self.flag_start_tracking = 0

        self.prev_x = 0
        self.prev_y = 0
        self.prev_z = 0

        self.kalman = cv2.KalmanFilter(6, 3, 1)

        self.kalman.transitionMatrix = np.array([[1., self.dt, 0., 0., 0., 0.],
                                                 [0., 1., 0., 0., 0., 0.],
                                                 [0., 0., 1., self.dt, 0., 0.],
                                                 [0., 0., 0., 1., 0., 0.],
                                                 [0., 0., 0., 0., 1., self.dt],
                                                 [0., 0., 0., 0., 0., 1.]])

        self.kalman.measurementMatrix = np.array([[1., 0., 0., 0., 0., 0.],
                                                  [0., 0., 1., 0., 0., 0.],
                                                  [0., 0., 0., 0., 1., 0.]])

        self.kalman.controlMatrix = np.array([[0.],
                                              [0.],
                                              [0.],
                                              [0.],
                                              [0.],
                                              [self.dt ** 2 / 2]])

        self.kalman.processNoiseCov = np.array([[1e-1, 0., 0., 0., 0., 0.],
                                                [0., 1e-1, 0., 0., 0., 0.],
                                                [0., 0., 1e-1, 0., 0., 0.],
                                                [0., 0., 0., 1e-1, 0., 0.],
                                                [0., 0., 0., 0., 1e-1, 0.],
                                                [0., 0., 0., 0., 0., 1e-1]])

        self.kalman.measurementNoiseCov = 1e+2 * np.eye(3)

        self.kalman.errorCovPost = 1e6 * np.eye(6)

    def update_kalman_matrices(self, dt):
        self.dt = dt
        self.kalman.transitionMatrix[0][1] = self.dt
        self.kalman.transitionMatrix[2][3] = self.dt
        self.kalman.transitionMatrix[4][5] = self.dt
        self.kalman.controlMatrix[5] = self.dt

    def trajectory_identification(self, x, y, z, dt):
        self.update_kalman_matrices(dt)
        g = -9.8

        if self.flag_init_data == 0:
            self.prev_x = x
            self.prev_y = y
            self.prev_z = z
            self.flag_init_data = 1
            return np.array([[]])

        if self.flag_start_tracking == 0:
            vx = (x - self.prev_x) / dt
            vy = (y - self.prev_y) / dt
            vz = (z - self.prev_z) / dt
            print(vx, vy, vz)

            self.kalman.statePost = np.array([[x],
                                              [vx],
                                              [y],
                                              [vy],
                                              [z],
                                              [vz]])
            self.flag_start_tracking = 1

        meas = np.array([[x],
                         [y],
                         [z]])

        control = np.array([[g]])

        prediction = self.kalman.predict(control)
        correct = self.kalman.correct(meas)

        return correct
