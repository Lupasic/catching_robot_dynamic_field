# Install script for directory: /home/sarrasor/cdr/cedar/cedar/devices

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Camera.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Camera.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Channel.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Channel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/ChannelDeclaration.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/ChannelDeclaration.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Component.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Component.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/ComponentDeclaration.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/ComponentDeclaration.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/ComponentParameter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/ComponentParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/ComponentSlot.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/ComponentSlot.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/DifferentialDrive.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/ForwardKinematics.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/ForwardKinematics.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/KinematicChain.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/KinematicChain.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Locomotion.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/NetworkChannel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Odometry.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Robot.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Robot.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/RobotManager.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/RobotManager.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Sensor.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Sensor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/SerialChannel.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/SerialChannel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/SimulatedCamera.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/SimulatedCamera.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/SimulatedKinematicChain.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/SimulatedKinematicChain.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/SimulatedVehicle.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/SimulatedVehicle.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Vehicle.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/Vehicle.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/YarpCamera.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/YarpCamera.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/YarpChannel.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/YarpChannel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/YarpKinematicChain.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/YarpKinematicChain.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/YarpVehicle.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/YarpVehicle.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/amtec" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/amtec/KinematicChain.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/amtec" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/amtec/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/communication" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/communication/Communication.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/communication/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/communication/gui/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/communication" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/communication/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/exceptions.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/AmtecChain.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/AmtecChain.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/Caren.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/Caren.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/CoraArm.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/CoraArm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/CoraHead.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/CoraHead.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/KinematicChain.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/KinematicChain.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/KukaArm.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/KukaArm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/PowerCube110.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/PowerCube110.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/PowerCubeWrist90.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/PowerCubeWrist90.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/RobotVisualisation.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/RobotVisualisation.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/Sdh.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/Sdh.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gl" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gl/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gui/ComponentParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gui/KinematicChainCommandWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gui/KinematicChainMonitorWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gui/KinematicChainWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gui/MountedCameraViewer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gui/RobotCard.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gui/RobotManager.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/gui/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/Drive.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/DriveSerial.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/InfraredSensorSerial.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/InfraredSensorYarp.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/Led.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/LedSerial.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/Odometry.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/SerialChannel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/epuck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/epuck/AccelerationSensorSerial.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/epuck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/epuck/YarpDrive.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/epuck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/epuck/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/gui/DriveControlWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/gui/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/khepera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/khepera/Arm.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/khepera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/khepera/Arm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/khepera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/khepera/ArmSerial.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/khepera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/khepera/ArmSerial.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/khepera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/khepera/Gripper.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/khepera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/khepera/GripperSerial.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/khepera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/khepera/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kteam/serialChannelHelperFunctions.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kuka" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kuka/FRIChannel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kuka" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kuka/KinematicChain.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kuka/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kuka/gui/FriStatusWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kuka/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kuka/gui/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kuka" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/kuka/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/robot" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/robot/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/CamProperty.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/Channel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/Grabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/Properties.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/backends" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/backends/Backend.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/backends" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/backends/BackendCvVideoCapture.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/backends" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/backends/BackendDc1394.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/backends" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/backends/BackendType.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/backends" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/backends/BackendV4L.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/backends" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/backends/LibDcBase.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/enums/Decoding.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/enums/FrameRate.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/enums/IsoSpeed.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/enums/Property.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/enums/PropertyMode.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/enums/Setting.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera/enums" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/enums/VideoMode.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/exceptions.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/camera" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/camera/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/GLChannel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/GLGrabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/GrabbableChannel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/GrabbableGrabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/Grabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/GrabberChannel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/NetChannel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/NetGrabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/PictureChannel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/PictureGrabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/RecordingFormat.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/VideoChannel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/VideoGrabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/exceptions.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/sensors/visual" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/devices/sensors/visual/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/devices/gui/ui_RobotManager.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kteam/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/devices/kteam/gui/ui_DriveControlWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices/kuka/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/devices/kuka/gui/ui_FriStatusWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/devices" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/devices/lib.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedardev.so.6.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedardev.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/sarrasor/cdr/cedar/lib/libcedardev.so.6.1.0"
    "/home/sarrasor/cdr/cedar/lib/libcedardev.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedardev.so.6.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedardev.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/sarrasor/cdr/cedar/lib:/usr/local/lib:/home/sarrasor/Qt/5.7/gcc_64/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

