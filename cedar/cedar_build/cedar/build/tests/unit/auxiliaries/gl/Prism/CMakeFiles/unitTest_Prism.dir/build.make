# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sarrasor/cdr/cedar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sarrasor/cdr/cedar/build

# Include any dependencies generated for this target.
include tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/depend.make

# Include the progress variables for this target.
include tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/progress.make

# Include the compile flags for this target's objects.
include tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/flags.make

tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o: tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/flags.make
tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o: ../tests/unit/auxiliaries/gl/Prism/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sarrasor/cdr/cedar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o"
	cd /home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Prism && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unitTest_Prism.dir/main.cpp.o -c /home/sarrasor/cdr/cedar/tests/unit/auxiliaries/gl/Prism/main.cpp

tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unitTest_Prism.dir/main.cpp.i"
	cd /home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Prism && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sarrasor/cdr/cedar/tests/unit/auxiliaries/gl/Prism/main.cpp > CMakeFiles/unitTest_Prism.dir/main.cpp.i

tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unitTest_Prism.dir/main.cpp.s"
	cd /home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Prism && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sarrasor/cdr/cedar/tests/unit/auxiliaries/gl/Prism/main.cpp -o CMakeFiles/unitTest_Prism.dir/main.cpp.s

tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o.requires:

.PHONY : tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o.requires

tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o.provides: tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o.requires
	$(MAKE) -f tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/build.make tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o.provides.build
.PHONY : tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o.provides

tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o.provides.build: tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o


# Object files for target unitTest_Prism
unitTest_Prism_OBJECTS = \
"CMakeFiles/unitTest_Prism.dir/main.cpp.o"

# External object files for target unitTest_Prism
unitTest_Prism_EXTERNAL_OBJECTS =

../bin/unitTest/auxiliaries/gl/unitTest_Prism: tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o
../bin/unitTest/auxiliaries/gl/unitTest_Prism: tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/build.make
../bin/unitTest/auxiliaries/gl/unitTest_Prism: ../lib/libcedarproc.so.6.1.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/local/lib/libQGLViewer-qt5.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: ../lib/libcedardev.so.6.1.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: ../lib/libcedaraux.so.6.1.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: ../lib/libcedarunits.so.6.1.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt5PrintSupport.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt5OpenGL.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt5Charts.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt5DataVisualization.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt53DExtras.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt53DInput.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt53DLogic.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt53DRender.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt53DCore.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt5Xml.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt5Svg.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt5Widgets.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt5Gui.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /home/sarrasor/Qt/5.7/gcc_64/lib/libQt5Core.so.5.7.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libboost_system.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_shape.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_bgsegm.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_bioinspired.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_ccalib.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_datasets.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_dpm.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_face.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_freetype.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_fuzzy.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_hdf.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_optflow.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_video.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_plot.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_reg.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_saliency.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_stereo.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_structured_light.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_viz.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_rgbd.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_surface_matching.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_text.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_ximgproc.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_xphoto.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libopencv_core.so.3.2.0
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/local/lib/libQGLViewer-qt5.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libfftw3.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libfftw3_omp.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: /usr/lib/x86_64-linux-gnu/libdc1394.so
../bin/unitTest/auxiliaries/gl/unitTest_Prism: tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sarrasor/cdr/cedar/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../../../../bin/unitTest/auxiliaries/gl/unitTest_Prism"
	cd /home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Prism && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unitTest_Prism.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/build: ../bin/unitTest/auxiliaries/gl/unitTest_Prism

.PHONY : tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/build

tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/requires: tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/main.cpp.o.requires

.PHONY : tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/requires

tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/clean:
	cd /home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Prism && $(CMAKE_COMMAND) -P CMakeFiles/unitTest_Prism.dir/cmake_clean.cmake
.PHONY : tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/clean

tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/depend:
	cd /home/sarrasor/cdr/cedar/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sarrasor/cdr/cedar /home/sarrasor/cdr/cedar/tests/unit/auxiliaries/gl/Prism /home/sarrasor/cdr/cedar/build /home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Prism /home/sarrasor/cdr/cedar/build/tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/unit/auxiliaries/gl/Prism/CMakeFiles/unitTest_Prism.dir/depend

