# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils/build

# Include any dependencies generated for this target.
include CMakeFiles/figura.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/figura.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/figura.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/figura.dir/flags.make

CMakeFiles/figura.dir/Figura.cpp.o: CMakeFiles/figura.dir/flags.make
CMakeFiles/figura.dir/Figura.cpp.o: /home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils/Figura.cpp
CMakeFiles/figura.dir/Figura.cpp.o: CMakeFiles/figura.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/figura.dir/Figura.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/figura.dir/Figura.cpp.o -MF CMakeFiles/figura.dir/Figura.cpp.o.d -o CMakeFiles/figura.dir/Figura.cpp.o -c /home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils/Figura.cpp

CMakeFiles/figura.dir/Figura.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/figura.dir/Figura.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils/Figura.cpp > CMakeFiles/figura.dir/Figura.cpp.i

CMakeFiles/figura.dir/Figura.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/figura.dir/Figura.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils/Figura.cpp -o CMakeFiles/figura.dir/Figura.cpp.s

# Object files for target figura
figura_OBJECTS = \
"CMakeFiles/figura.dir/Figura.cpp.o"

# External object files for target figura
figura_EXTERNAL_OBJECTS =

figura: CMakeFiles/figura.dir/Figura.cpp.o
figura: CMakeFiles/figura.dir/build.make
figura: /usr/lib/x86_64-linux-gnu/libGL.so
figura: /usr/lib/x86_64-linux-gnu/libGLU.so
figura: /usr/lib/x86_64-linux-gnu/libglut.so
figura: CMakeFiles/figura.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable figura"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/figura.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/figura.dir/build: figura
.PHONY : CMakeFiles/figura.dir/build

CMakeFiles/figura.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/figura.dir/cmake_clean.cmake
.PHONY : CMakeFiles/figura.dir/clean

CMakeFiles/figura.dir/depend:
	cd /home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils /home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils /home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils/build /home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils/build /home/retr0/Documents/3ano2sem/cg/trabalho/phase1/utils/build/CMakeFiles/figura.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/figura.dir/depend

