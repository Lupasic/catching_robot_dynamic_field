#!/usr/bin/env python
import cv_bridge
import cv2
import numpy as np
import time
import rospy
from collections import deque
from geometry_msgs.msg import Point, PointStamped
from sensor_msgs.msg import Image, CameraInfo

pub = rospy.Publisher('camera_pixel_to_camera_obj', PointStamped, queue_size=1)
# uncomment pubim for debugging
# pubim = rospy.Publisher('tracking_image', Image, queue_size=1)

# Allowed depth
MAX_DEPTH = 5.0
MIN_DEPTH = 1.0

# Start delay to compensate bluish effect
IMAGE_DELAY = 200
delay = 0

# Area threshold
MIN_AREA = 10
MAX_AREA = 1000

# Binary threshold
THRESHOLD_MIN = 25
THRESHOLD_MAX = 255

# Previous frames subtraction
buf_size = 0
prev_buf = deque(maxlen=buf_size)

# HSV Filter
LOWER = np.array([0, 140, 90])
# LOWER = np.array([0, 100, 30])
UPPER = np.array([255, 255, 255])

K = None
cv_image = None
first = None
bridge = cv_bridge.CvBridge()
bridge1 = cv_bridge.CvBridge()

depth_roi = [100, 100]
depth_step = 1


def imageCallack(data):
    global pub, pixel_depth, bridge, pubim, K, first, delay
    # if cv_image is not None and K is not None:
    # t = time.time()
    if cv_image is not None and K is not None:
        # Reduce blue hren'
        if delay < IMAGE_DELAY:
            delay += 1
            return

        frame = bridge.imgmsg_to_cv2(data, desired_encoding="passthrough")

        if first is None:
            print("Tracker is ready")
            first = frame

        # Apply motion detection
        sub1 = cv2.subtract(frame, first)
        sub2 = cv2.subtract(first, frame)
        dif = cv2.add(sub1, sub2)

        dif = cv2.cvtColor(dif, cv2.COLOR_RGB2GRAY)

        s, dif = cv2.threshold(
            dif, THRESHOLD_MIN, THRESHOLD_MAX, cv2.THRESH_BINARY)

        motion = cv2.bitwise_and(frame, frame, mask=dif)

        if len(prev_buf) > 0:
            for i in range(len(prev_buf)):
                motion = cv2.subtract(motion, prev_buf[i])

        if (buf_size > 0):
            prev_buf.append(motion)

        # Apply hsv filter
        hsv = cv2.cvtColor(motion, cv2.COLOR_RGB2HSV)
        mask = cv2.inRange(hsv, LOWER, UPPER)
        dif = cv2.bitwise_and(motion, motion, mask=mask)
        dif = cv2.cvtColor(dif, cv2.COLOR_RGB2GRAY)

        # Find contours
        contours, hierarchy = cv2.findContours(
            dif, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)

        if len(contours) != 0:
            cnt = max(contours, key=cv2.contourArea)
            area = cv2.contourArea(cnt)

            if area > MIN_AREA and area < MAX_AREA:
                x, y, w, h = cv2.boundingRect(cnt)
                # cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 1)

                # Contour area
                # cv2.putText(frame, str(area), (x - 5, y - 5),
                            # cv2.FONT_HERSHEY_SIMPLEX, 0.45, (255, 0, 0), 0)

                # Find center of a bounding rectangle
                current_point = Point(x + w / 2, y + h / 2, 0)
                # cont_center = (int(x + w / 2), int(y + h / 2))
                # cv2.circle(frame, cont_center, 1, (255, 0, 0), 2)
                # print("Center:", cont_center)
                # Convert the center to real coordinates
                pixel_depth = float(
                    cv_image[int(current_point.y)][int(current_point.x)]) * 0.001


                # r_from = x

                # if r_from < 0:
                #     r_from = 0

                # r_to = x + w

                # if r_to > cv_image.shape[1]:
                #     r_to = cv_image.shape[1]
                # elif r_to < 0:
                #     r_to = 0

                # c_from = y

                # if (c_from < 0):
                #     c_from = 0

                # c_to = y + h

                # if c_to > cv_image.shape[1]:
                #     c_to = cv_image.shape[1]

                # if c_to < 0:
                #     c_to = 0

                # depth_sum = 0
                # count = 0
                # for r in range(r_from, r_to):
                #     for c in range(c_from, c_to):
                #         count += 1
                #         depth_sum += float(
                #             cv_image[c][r]) * 0.001

                # pixel_depth = depth_sum / count
                # print(round(pixel_depth, 2))
                if (pixel_depth <= MAX_DEPTH and pixel_depth >= MIN_DEPTH):
                    transform_to_point(current_point, pixel_depth)

        # print(time.time() - t)
        # pubim.publish(bridge.cv2_to_imgmsg(frame, "rgb8"))

        # dif = cv2.cvtColor(dif, cv2.COLOR_GRAY2RGB)
        # bar = np.ones_like(frame) * 255
        # bar = bar[0:bar.shape[0], 0:10]
        # numpy_horizontal = np.hstack((motion, bar, dif, bar, frame))
        # pubim.publish(bridge.cv2_to_imgmsg(numpy_horizontal, "rgb8"))


def imageCallackDepth(data):
    global bridge1, cv_image

    cv_image = bridge1.imgmsg_to_cv2(data, desired_encoding="passthrough")


def transform_to_point(data, pixel_depth):
    global cv_image, K
    point_stamped = PointStamped()
    point_stamped.header.stamp = rospy.Time.now()
    point_stamped.header.frame_id = "camera_color_optical_frame"
    point_stamped.point.x = pixel_depth * ((data.x - K[2]) * (1 / K[0]))
    point_stamped.point.y = pixel_depth * ((data.y - K[5]) * (1 / K[4]))
    point_stamped.point.z = pixel_depth
    # cv_image = None
    pub.publish(point_stamped)


if __name__ == '__main__':
    rospy.init_node('red_ball_tracker', anonymous=True)

    K = rospy.wait_for_message(
        "/camera/aligned_depth_to_color/camera_info", CameraInfo).K

    rospy.Subscriber("/camera/aligned_depth_to_color/image_raw",
                     Image, imageCallackDepth, queue_size=1)
    rospy.Subscriber("/camera/color/image_raw", Image,
                     imageCallack, queue_size=1)

    rospy.spin()
