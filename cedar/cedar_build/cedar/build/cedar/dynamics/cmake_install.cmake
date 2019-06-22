# Install script for directory: /home/sarrasor/cdr/cedar/cedar/dynamics

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/Dynamics.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/Dynamics.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/fields" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/fields/NeuralField.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/fields" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/fields/NeuralField.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/fields" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/fields/Preshape.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/fields" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/fields/Preshape.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/gui/NeuralFieldView.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/gui/NeuralFieldView.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/scripts" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/scripts/ExecuteFunctionOnSteps.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/scripts" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/scripts/ExecuteFunctionOnSteps.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/HarmonicOscillator.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/HarmonicOscillator.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/HebbianConnection.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/HebbianConnection.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/LogTimeInterval.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/LogTimeInterval.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/RateMatrixToSpaceCode.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/RateMatrixToSpaceCode.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/RateToSpaceCode.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/RateToSpaceCode.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/SerialOrder.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/SerialOrder.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/SpaceCodeToRateMatrix.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/SpaceCodeToRateMatrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/SpaceToRateCode.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/SpaceToRateCode.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/TwoStepInput.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/dynamics/steps/TwoStepInput.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/dynamics" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/dynamics/lib.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedardyn.so.6.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedardyn.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/sarrasor/cdr/cedar/lib/libcedardyn.so.6.1.0"
    "/home/sarrasor/cdr/cedar/lib/libcedardyn.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedardyn.so.6.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedardyn.so"
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

