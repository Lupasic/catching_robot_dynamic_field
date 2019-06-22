# Install script for directory: /home/sarrasor/cdr/cedar

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cedar" TYPE FILE OPTIONAL FILES "/home/sarrasor/cdr/cedar/build/cedar_configuration.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0" TYPE FILE FILES
    "/home/sarrasor/cdr/cedar/cedar/defines.h"
    "/home/sarrasor/cdr/cedar/cedar/namespace.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/configuration.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND ln -fsT /usr/local/include/cedar-6.1.0 /usr/local/include/cedar)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND make doc)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cedar-6.1.0" TYPE DIRECTORY FILES "/home/sarrasor/cdr/cedar/build/doc/html")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cedar-6.1.0" TYPE FILE OPTIONAL FILES "/home/sarrasor/cdr/cedar/build/doc/latex/refman.pdf")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/cedar-6.1.0/resources")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/share/cedar-6.1.0" TYPE DIRECTORY FILES "/home/sarrasor/cdr/cedar/resources")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND ln -fsT /usr/local/share/cedar-6.1.0 /usr/local/share/cedar)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND chmod 755 /usr/local/bin/cedar)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/sarrasor/cdr/cedar/build/cedar/auxiliaries/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/cedar/devices/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/cedar/dynamics/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/cedar/processing/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/cedar/testingUtilities/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/cedar/units/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/ArithmeticExpression/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/Backtrace/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/CTestTest/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/Configurable/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/DataTable/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/LocalCoordinateFrame/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/Lockable/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/Log/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/LoopFunctionInThread/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/LoopedThread/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/MapParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/MatDataSerialization/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/MovingAverage/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/NamedConfigurable/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/ObjectListParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/ObjectMapParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/ObjectParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/ParameterFactory/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/ParameterLinking/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/Path/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/PathTemplate/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/Recorder/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/Singleton/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/SleepFunctions/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/StringFunctions/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/StringParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/SystemFunctions/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/ThreadingUtilities/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/TypeHierarchyMap/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/UnitParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/UnmangleTest/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/VersionMacros/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/net/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/devices/Component/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/devices/ComponentChannelSharing/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/devices/Robot/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/devices/RobotConfiguration/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/devices/SimulatedKinematicChain/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/dynamics/Dynamics/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/dynamics/NeuralField/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/ArchitectureIO/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/Connecting/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/Group/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/GroupOnStartStop/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/GroupPath/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/GroupTriggerChains/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/ListenerManagement/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/ProcessingSteps/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/ProjectionMapping/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/Step/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/StepDataLocking/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/StepParameterLinking/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/TriggerChains/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/TypeCheck/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/units/UnitMatrix/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/auxiliaries/gl/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/AmtecSpeedControl/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/kuka/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/processing/LeakTest/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/performance/auxiliaries/LoopedThreadPerformance/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/performance/auxiliaries/RecorderPerformance/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/performance/auxiliaries/Sigmoid_perf/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/performance/auxiliaries/netPerformance/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/performance/dynamics/NeuralField_perf/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/performance/processing/perf_ComponentMultiply/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/performance/processing/perf_Projection/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/convolution/ConvolutionEngine/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/convolution/FFTW/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Block/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Chessboard/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Cone/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Cylinder/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Ellipse/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/ObjectVisualization/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Prism/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Pyramid/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Sphere/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Torus/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gui/gui_ImagePlot/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gui/gui_MatrixPlotsBasics/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gui/gui_NumericParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gui/gui_NumericVectorParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gui/gui_StringParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gui/gui_VectorParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/kernel/Kernel/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/math/Limits/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/math/LimitsParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/math/algebraTools/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/math/coordinateTransformations/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/math/screwCalculus/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/math/sigmoids/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/math/tools/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/parameters/FileParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/parameters/NumericParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/parameters/NumericVectorParameter/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/gui/ArchitectureCreation/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/gui/ArchitectureLoading/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/gui/ArchitectureSaving/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/gui/gui_Group/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/gui/gui_RecorderWidget/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/gui/gui_cedar/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/steps/MatrixSlice/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/steps/Projection/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/processing/steps/Resize/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/gl/Caren/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/gl/Cora/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/gl/KinematicChain/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/gl/Kuka/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/gl/MountedCameraViewer/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/gl/PowerCube110/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/gl/PowerCubeWrist90/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/gl/sdh/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/gui/AmtecKinematicChain/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/gui/KinematicChainWidget/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/kteam/EPuckDrive/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/kteam/KheperaDrive/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/kteam/Odometry/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/sensors/CameraGrabber/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/sensors/GLGrabber/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/sensors/GrabbableGrabber/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/sensors/Grabber/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/sensors/NetGrabber/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/sensors/PictureGrabber/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/devices/sensors/VideoGrabber/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/interactive/processing/gui/UiSettingsWidget/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/performance/auxiliaries/convolution/FFTW_perf/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/performance/auxiliaries/convolution/OpenCV/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/devices/sensors/visual/Grabber/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/tests/unit/devices/sensors/visual/StereoGrabber/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/executables/cedar/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/executables/cedar-remote-robot/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/executables/cedar-shell/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/executables/cedar-version/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/executables/fwBusInfo/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/executables/fwBusReset/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/executables/fwCamInfo/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/executables/pluginManager/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/executables/robotManager/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/examples/kukaMovement/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/examples/processingTutorial/cmake_install.cmake")
  include("/home/sarrasor/cdr/cedar/build/examples/auxiliaries/Configurable/Tutorial/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/sarrasor/cdr/cedar/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")