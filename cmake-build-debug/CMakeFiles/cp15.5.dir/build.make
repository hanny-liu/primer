# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/liuhongwei/下载/clion-2018.3.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/liuhongwei/下载/clion-2018.3.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/liuhongwei/workspace/c++primer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liuhongwei/workspace/c++primer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cp15.5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cp15.5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cp15.5.dir/flags.make

CMakeFiles/cp15.5.dir/main.cpp.o: CMakeFiles/cp15.5.dir/flags.make
CMakeFiles/cp15.5.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuhongwei/workspace/c++primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cp15.5.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cp15.5.dir/main.cpp.o -c /home/liuhongwei/workspace/c++primer/main.cpp

CMakeFiles/cp15.5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cp15.5.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuhongwei/workspace/c++primer/main.cpp > CMakeFiles/cp15.5.dir/main.cpp.i

CMakeFiles/cp15.5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cp15.5.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuhongwei/workspace/c++primer/main.cpp -o CMakeFiles/cp15.5.dir/main.cpp.s

# Object files for target cp15.5
cp15_5_OBJECTS = \
"CMakeFiles/cp15.5.dir/main.cpp.o"

# External object files for target cp15.5
cp15_5_EXTERNAL_OBJECTS =

cp15.5: CMakeFiles/cp15.5.dir/main.cpp.o
cp15.5: CMakeFiles/cp15.5.dir/build.make
cp15.5: CMakeFiles/cp15.5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/liuhongwei/workspace/c++primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cp15.5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cp15.5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cp15.5.dir/build: cp15.5

.PHONY : CMakeFiles/cp15.5.dir/build

CMakeFiles/cp15.5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cp15.5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cp15.5.dir/clean

CMakeFiles/cp15.5.dir/depend:
	cd /home/liuhongwei/workspace/c++primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liuhongwei/workspace/c++primer /home/liuhongwei/workspace/c++primer /home/liuhongwei/workspace/c++primer/cmake-build-debug /home/liuhongwei/workspace/c++primer/cmake-build-debug /home/liuhongwei/workspace/c++primer/cmake-build-debug/CMakeFiles/cp15.5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cp15.5.dir/depend
