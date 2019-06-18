#!/usr/bin/env python

import rospy
import numpy
#from std_msgs.msg import String
from sensor_msgs.msg import Image
from geometry_msgs.msg import PoseArray, Point
from fiducial_msgs.msg import FiducialTransformArray

pub = rospy.Publisher('obj_in_robot_tf', PoseArray, queue_size=10)
TFresult = None
Objects = None


def quart_to_Rmat(X,Y,Z,qX,qY,qZ,qW):
    TF = numpy.matrix ([   [1 - 2*qY*qY - 2*qZ*qZ,     2*qX*qY - 2*qZ*qW,      2*qX*qZ + 2*qY*qW,     X],
                                    [2*qX*qY + 2*qZ*qW,         1 - 2*qX*qX - 2*qZ*qZ,  2*qY*qZ - 2*qX*qW,      Y],
                                    [2*qX*qZ - 2*qY*qW,         2*qY*qZ + 2*qX*qW,      1 - 2*qX*qX - 2*qY*qY,  Z],
                                    [0,                         0,                      0,                      1 ]])
    return TF



def TFcallback(data):
    global TFresult, pub, Objects
    is_world_marker = False

    markers = iter(data.transforms)
    for marker in markers:
        if (marker.fiducial_id == 7) and Objects is not None:
                for cur_object in Objects:
                    is_world_marker = True

                    TF0 = numpy.matrix ([[ 1,   0,  0,  TF2x],
                                         [ 0,   1,  0,  TF2y],
                                         [ 0,   0,  1,  TF2z],
                                         [ 0,   0,  0,      1]])

                    X = marker.transform.translation.x
                    Y = marker.transform.translation.y
                    Z = marker.transform.translation.z
                    # Quaternion of our marker
                    qX = marker.transform.rotation.x
                    qY = marker.transform.rotation.y
                    qZ = marker.transform.rotation.z
                    qW = marker.transform.rotation.w
                    # Transformation matrix from camera to marker
                    TF1 = quart_to_Rmat(X,Y,Z,qX,qY,qZ,qW)
                    #Transformation matrix from marker to robot
                    TF2x = 1
                    TF2y = 1
                    TF2z = 1
                    TF2 = numpy.matrix ([[ 1,   0,  0,  TF2x],
                                         [ 0,   1,  0,  TF2y],
                                         [ 0,   0,  1,  TF2z],
                                         [ 0,   0,  0,      1]])

                    # position of robot in camera space
                    TF = numpy.matmul(TF1,TF2)
                    # position of camera in robot space
                    TFresult = numpy.linalg.inv(TF)


        if is_world_marker is False:
            print ("There is no world marker!!!")

def CameraCallback(data):
    global Objects
    Objects = iter(data.transforms.poses)
    

def talker():
    global pub
    pub.publish(hello_str)


def general():
    rospy.init_node('obj_from_cam_to_robot_tf', anonymous=True)

    rospy.Subscriber("/fiducial_transforms", FiducialTransformArray, TFcallback)
    rospy.Subscriber("/blah", PoseArray, CameraCallback)
    rate = rospy.Rate(10) # 10hz
    talker()
    rate.sleep()
    rospy.spin()


if __name__ == '__main__':
    general()