import cv2 as cv
import numpy as np
import pyrealsense2 as rs

pipeline = rs.pipeline()
config = rs.config()
config.enable_stream(rs.stream.color, 848, 480, rs.format.bgr8, 60)
pipeline.start(config)

# Show bounding rectangle
SHOW_RECTANGLE = True
# Show precise contour
SHOW_PRECISE = True
# Show center of a contour
SHOW_CENTER = True
# Show result values
SHOW_RESULT = False

# HSV Filter 
LOWER = np.array([28, 166, 72])
UPPER = np.array([193, 239, 189])

# Font. Not all fonts are supported
# Check OpenCV documentation
FONT = cv.FONT_HERSHEY_SIMPLEX

# Filter contours with small area
NOIZE_AREA = 500

# Create a window for sliders and frames
cv.namedWindow("Tracking", cv.WINDOW_FULLSCREEN)

# Event function for trackbars
def nothing(x):
    pass

# Create trackbars for color change
cv.createTrackbar("Lower hue", "Tracking", LOWER[0], 255, nothing)
cv.createTrackbar("Upper hue", "Tracking", UPPER[0], 255, nothing)
cv.createTrackbar("Lower saturation", "Tracking", LOWER[1], 255, nothing)
cv.createTrackbar("Upper saturation", "Tracking", UPPER[1], 255, nothing)
cv.createTrackbar("Lower value", "Tracking", LOWER[2], 255, nothing)
cv.createTrackbar("Upper value", "Tracking", UPPER[2], 255, nothing)

# Info message 
info1 = 'Press Q to exit, W - steering decision, E - "Stay" boundaries'
info2 = "U - bounding rectangle, T - precise contour, Y - center of a contour"
info3 = "I - this message, R - result. WERTYUI keys work as on/off button"

# Result message
result1 = "Filter:  Lower is " + str(LOWER) + " Upper is " + str(UPPER)
result3 = "Noize area: " + str(NOIZE_AREA)

while True:
    # Read camera frame
    # ret, frame = cap.read()

    frames = pipeline.wait_for_frames()
    color_frame = frames.get_color_frame()
    frame = np.asanyarray(color_frame.get_data())
    # Save original frame
    original = frame

    # Blur a frame a litttle bit to remove noize
    frame = cv.GaussianBlur(frame, (5, 5), 0)
    #  Convert frame from BGR to HSV color space
    hsv = cv.cvtColor(frame, cv.COLOR_RGB2HSV)
    # Apply our filter
    mask = cv.inRange(hsv, LOWER, UPPER)

    # Find all contours
    contours, hierarchy = cv.findContours(mask, cv.RETR_EXTERNAL, cv.CHAIN_APPROX_NONE)

    # If at least one contour exist
    if len(contours) != 0:
        # Find contour with max area
        cnt = max(contours, key = cv.contourArea)   

        # Filter noize contours
        if cv.contourArea(cnt) > NOIZE_AREA:
            # Find and draw a bounding rectangle
            x,y,w,h = cv.boundingRect(cnt)
            # print(x, y, w, h)
            if SHOW_RECTANGLE:
                cv.rectangle(original, (x,y), (x+w,y+h), (0,255,0), 1)
            # Find center of a bounding rectangle
            center = (int(x+w/2), int(y+h/2))
            # Draw a center circle
            if SHOW_CENTER:
                cv.circle(original, (center[0], center[1]), 3, (0,0,255), -1)
            # Calculate the x-center of a frame
            xc = int(original.shape[1] / 2)

            if SHOW_PRECISE:        
                # Find and draw precise contour
                rect = cv.minAreaRect(cnt)
                box = cv.boxPoints(rect)
                box = np.int0(box)
                cv.drawContours(original, [box], 0, (255,0,0), 1)

    # Convert mask from GRAY to BGR in order to concatenate it with original frame
    mask = cv.cvtColor(mask, cv.COLOR_GRAY2BGR)
    # Concatenate mask and original frame to show it in one window
    numpy_horizontal = np.hstack((mask, original)) 
    cv.imshow("Tracking", numpy_horizontal)

    # Wait for a key
    key = cv.waitKey(1)

    # Key logic
    if key == 113:
        break
    elif key == 119:    
        SHOW_DECISION = not SHOW_DECISION
    elif key == 101:
        SHOW_STAY_BOUNDARIES = not SHOW_STAY_BOUNDARIES
    elif key == 114:
        SHOW_RESULT = not SHOW_RESULT
    elif key == 116:
        SHOW_PRECISE = not SHOW_PRECISE
    elif key == 121:
        SHOW_CENTER = not SHOW_CENTER   
    elif key == 105:
        SHOW_INFO = not SHOW_INFO   
    elif key == 117:
        SHOW_RECTANGLE = not SHOW_RECTANGLE 

    # get current positions of trackbars
    lh = cv.getTrackbarPos("Lower hue", "Tracking")
    ls = cv.getTrackbarPos("Lower saturation", "Tracking")
    lv = cv.getTrackbarPos("Lower value", "Tracking")
    uh = cv.getTrackbarPos("Upper hue", "Tracking")
    us = cv.getTrackbarPos("Upper saturation", "Tracking")
    uv = cv.getTrackbarPos("Upper value", "Tracking")
    # Apply new filter values
    LOWER = np.array([lh, ls, lv])
    UPPER = np.array([uh, us, uv])
    
    # Apply new Noize area
    NOIZE_AREA = cv.getTrackbarPos("Noize area", "Tracking") 

# Close windows
cv.destroyAllWindows()      
