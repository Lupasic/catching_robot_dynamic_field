# CMake generated Testfile for 
# Source directory: /home/sarrasor/cdr/cedar/tests/performance/auxiliaries/convolution/OpenCV
# Build directory: /home/sarrasor/cdr/cedar/build/tests/performance/auxiliaries/convolution/OpenCV
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(OpenCV "/home/sarrasor/cdr/cedar/bin/performanceTest/auxiliaries/convolution/performanceTest_OpenCV")
set_tests_properties(OpenCV PROPERTIES  LABELS "performanceTest;auxiliaries" WORKING_DIRECTORY "/home/sarrasor/cdr/cedar/tests/performance/auxiliaries/convolution/OpenCV")
