# Install script for directory: /home/sarrasor/cdr/cedar/cedar/processing

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Arguments.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Arguments.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Connectable.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Connectable.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/CppScript.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/CppScript.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/CppScriptDeclaration.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/CppScriptDeclaration.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/DataConnection.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/DataConnection.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/DataPath.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/DataPath.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/DataRole.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/DataRole.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/DataSlot.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/DataSlot.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/DeclarationRegistry.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Element.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Element.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/ElementDeclaration.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/ElementDeclaration.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/ElementDeclarationTemplate.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/ExternalData.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/ExternalData.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Group.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Group.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/GroupDeclaration.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/GroupDeclaration.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/GroupDeclarationManager.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/GroupDeclarationManager.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/GroupFileFormatV1.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/GroupFileFormatV1.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/GroupPath.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/GroupPath.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/InputSlotHelper.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/InputSlotHelper.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/LoopArguments.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/LoopedTrigger.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/LoopedTrigger.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/OwnedData.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/OwnedData.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/PlotData.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/PlotData.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/ProjectionMapping.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/ProjectionMapping.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/ProjectionMappingParameter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/ProjectionMappingParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Step.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Step.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/StepTime.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/StepTime.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Trigger.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Trigger.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/TriggerConnection.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/TriggerConnection.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Triggerable.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/Triggerable.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/consistency" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/consistency/ConsistencyIssue.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/consistency" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/consistency/ConsistencyIssue.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/consistency" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/consistency/LoopedElementInNonLoopedGroup.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/consistency" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/consistency/LoopedElementInNonLoopedGroup.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/consistency" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/consistency/LoopedElementNotConnected.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/consistency" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/consistency/LoopedElementNotConnected.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/exceptions.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/exceptions.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/ActionParameter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/ActionParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/ActionSequence.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/ActionSequence.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/ConnectableParameter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/ConnectableParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/Experiment.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/Experiment.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/PropertyParameter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/PropertyParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/StepPropertyParameter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/StepPropertyParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/Supervisor.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/Supervisor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/Action.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/Action.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/CallElementAction.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/CallElementAction.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/EndTrial.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/EndTrial.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/IncrementParameter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/IncrementParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/IterateDirectoryContents.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/IterateDirectoryContents.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/SetParameterValue.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/SetParameterValue.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/StoreSerializableData.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/StoreSerializableData.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/WriteMessage.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/action" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/action/WriteMessage.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/condition" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/condition/And.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/condition" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/condition/And.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/condition" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/condition/AtTime.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/condition" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/condition/AtTime.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/condition" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/condition/Condition.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/condition" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/condition/Condition.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/condition" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/condition/OnEachTrial.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/condition" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/condition/OnEachTrial.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/condition" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/condition/OnMatrixValue.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/condition" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/condition/OnMatrixValue.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/condition" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/condition/OnTrialNumber.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/condition" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/condition/OnTrialNumber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/gui/ActionListParameter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/gui/ActionListParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/gui/ActionParameter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/gui/ActionParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/gui/ActionSequence.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/gui/ActionSequence.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/gui/ConnectableParameter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/gui/ConnectableParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/gui/ExperimentItemWidget.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/gui/ExperimentItemWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/gui/StepPropertyParameter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/experiment/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/experiment/gui/StepPropertyParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/AdvancedParameterLinker.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/AdvancedParameterLinker.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ArchitectureConsistencyCheck.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ArchitectureConsistencyCheck.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ArchitectureScriptEditor.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ArchitectureScriptEditor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ArchitectureWidget.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ArchitectureWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ArchitectureWidgetList.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ArchitectureWidgetList.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/BoostControl.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/BoostControl.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/CommentWidget.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/CommentWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ConnectValidity.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Connectable.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Connectable.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ConnectableIconView.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ConnectableIconView.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Connection.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Connection.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ConnectorItem.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ConnectorItem.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/CouplingCollection.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/CouplingCollection.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/DataSlotItem.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/DataSlotItem.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/DefaultConnectableIconView.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/DefaultConnectableIconView.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Element.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Element.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ElementList.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ElementList.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ElementTreeWidget.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ElementTreeWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ExperimentDialog.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ExperimentDialog.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/FindDialog.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/FindDialog.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/GraphicsBase.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/GraphicsBase.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Group.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Group.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/GroupContainerItem.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/GroupContainerItem.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/GroupParameterDesigner.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/GroupParameterDesigner.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/GroupWidget.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/GroupWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Ide.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Ide.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/IdeApplication.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/IdeApplication.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Network.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Network.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/OneTimeMessageDialog.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/OneTimeMessageDialog.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/PerformanceOverview.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/PerformanceOverview.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/PlotDockWidget.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/PlotDockWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/PlotWidget.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/PlotWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ProjectionMappingParameter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ProjectionMappingParameter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/PropertyPane.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/PropertyPane.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/RecorderProperty.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/RecorderProperty.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/RecorderWidget.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/RecorderWidget.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ResizeHandle.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ResizeHandle.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Scene.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Scene.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Settings.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/Settings.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/SettingsDialog.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/SettingsDialog.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/SimulationControl.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/SimulationControl.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/StepItem.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/StepItem.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/StepManager.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/StepManager.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/StickyNote.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/StickyNote.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ToolBox.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/ToolBox.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/TriggerItem.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/TriggerItem.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/UiSettings.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/UiSettings.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/View.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/View.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/WidgetContainerItem.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/WidgetContainerItem.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/exceptions.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/exceptions.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui/stepViews" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/stepViews/BoostView.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui/stepViews" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/stepViews/BoostView.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui/stepViews" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/stepViews/ComponentStepView.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui/stepViews" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/stepViews/ComponentStepView.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui/stepViews" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/stepViews/StaticGainView.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui/stepViews" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/gui/stepViews/StaticGainView.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sinks" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sinks/GroupSink.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sinks" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sinks/GroupSink.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sinks" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sinks/LocalWriter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sinks" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sinks/LocalWriter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sinks" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sinks/NetWriter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sinks" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sinks/NetWriter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sinks" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sinks/VideoSink.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sinks" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sinks/VideoSink.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sinks" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sinks/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/BaseSignal.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/BaseSignal.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/Boost.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/Boost.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/BoxInput.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/BoxInput.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/Camera.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/Camera.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/ConstDiagonalMatrix.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/ConstDiagonalMatrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/ConstMatrix.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/ConstMatrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/GaussInput.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/GaussInput.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/GrabberBase.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/GrabberBase.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/GroupSource.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/GroupSource.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/LinearSpatialTemplate.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/LinearSpatialTemplate.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/LocalReader.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/LocalReader.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/NetReader.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/NetReader.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/Noise.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/Noise.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/Picture.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/Picture.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/SinusSignal.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/SinusSignal.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/SpatialTemplate.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/SpatialTemplate.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/StepSignal.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/StepSignal.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/Video.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/Video.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/VirtualCamera.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/VirtualCamera.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/sources" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/sources/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/AbsoluteValue.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/AbsoluteValue.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/AddConstant.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/AddConstant.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/AnglesOnPlane.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/AnglesOnPlane.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/BufferReader.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/BufferReader.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ChannelMerge.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ChannelMerge.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ChannelSplit.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ChannelSplit.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Clamp.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Clamp.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ColorConversion.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ColorConversion.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Component.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Component.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ComponentMultiply.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ComponentMultiply.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ConcatVertically.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ConcatVertically.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ConfigurationLimits.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ConfigurationLimits.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ConstVector.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ConstVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Convolution.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Convolution.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/CoordinateTransformation.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/CoordinateTransformation.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Count.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Count.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/CrossProduct.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/CrossProduct.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/DampedPseudoInverseKinematics.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/DampedPseudoInverseKinematics.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Delay.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Delay.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/DivideElementwise.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/DivideElementwise.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ExponentialSmoothing.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ExponentialSmoothing.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Flip.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Flip.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ForwardKinematics.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ForwardKinematics.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Histogram.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Histogram.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ImageGradient.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ImageGradient.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ImageTransform.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ImageTransform.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/InnerProduct.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/InnerProduct.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Jacobian.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Jacobian.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/LinearFunction.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/LinearFunction.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/LinearLateralShift.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/LinearLateralShift.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Mask.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Mask.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/MatrixMultiply.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/MatrixMultiply.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/MatrixPadding.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/MatrixPadding.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/MatrixSlice.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/MatrixSlice.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/MatrixTypeConverter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/MatrixTypeConverter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Maximum.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Maximum.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Minimum.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Minimum.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/NaNCheck.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/NaNCheck.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Noop.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Noop.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Norm.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Norm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Normalization.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Normalization.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/NormalizationType.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/NormalizationType.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Nullspace.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Nullspace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/NumericalDifferentiation.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/NumericalDifferentiation.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/NumericalIntegration.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/NumericalIntegration.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/OuterProduct.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/OuterProduct.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/OverTime.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/OverTime.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/PositionOfMaximum.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/PositionOfMaximum.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Projection.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Projection.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/PseudoInverse.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/PseudoInverse.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/PseudoInverseKinematics.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/PseudoInverseKinematics.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/RemoveMean.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/RemoveMean.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Resize.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Resize.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ScalarDivision.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ScalarDivision.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ScalarsToVector.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ScalarsToVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ShapeVisualisation.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ShapeVisualisation.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ShiftedMultiplication.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/ShiftedMultiplication.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Sinus.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Sinus.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Stack.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Stack.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/StaticGain.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/StaticGain.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/SubtractElementwise.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/SubtractElementwise.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Sum.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Sum.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Switch.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Switch.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Threshold.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Threshold.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/TransferFunction.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/TransferFunction.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Transpose.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/Transpose.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/UnitConverter.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/UnitConverter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/VariableBox.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/VariableBox.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/VariableGauss.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/VariableGauss.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/VectorToScalars.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/VectorToScalars.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/VehicleRotation.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/VehicleRotation.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/WeightedSum.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/WeightedSum.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/pairsGame.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/steps" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/steps/pairsGame.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/And.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/And.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/DerivedFrom.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/DerivedFrom.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/IsMatrix.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/IsMatrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/Matrix.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/Matrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/SameSize.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/SameSize.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/SameSizedCollection.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/SameSizedCollection.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/SameType.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/SameType.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/SameTypeCollection.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/SameTypeCollection.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/TypeCheck.fwd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/TypeCheck.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/typecheck" TYPE FILE FILES "/home/sarrasor/cdr/cedar/cedar/processing/typecheck/namespace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_AdvancedParameterLinker.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_ArchitectureConsistencyCheck.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_ArchitectureScriptEditor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_ArchitectureWidgetEditor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_ArchitectureWidgetList.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_BoostControl.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_ExperimentDialog.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_FindDialog.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_GroupParameterDesigner.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_Ide.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_OneTimeMessageDialog.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_PerformanceOverview.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_SettingsDialog.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_SimulationControl.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_StepManager.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing/gui" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/gui/ui_UiSettings.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cedar-6.1.0/processing" TYPE FILE FILES "/home/sarrasor/cdr/cedar/build/cedar/processing/lib.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedarproc.so.6.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedarproc.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/sarrasor/cdr/cedar/lib/libcedarproc.so.6.1.0"
    "/home/sarrasor/cdr/cedar/lib/libcedarproc.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedarproc.so.6.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcedarproc.so"
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

