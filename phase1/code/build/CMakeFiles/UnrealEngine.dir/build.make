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
CMAKE_SOURCE_DIR = /home/retr0/Repositorios/CG2025-UMINHO/phase1/code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build

# Include any dependencies generated for this target.
include CMakeFiles/UnrealEngine.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/UnrealEngine.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/UnrealEngine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UnrealEngine.dir/flags.make

CMakeFiles/UnrealEngine.dir/src/Figure.cpp.o: CMakeFiles/UnrealEngine.dir/flags.make
CMakeFiles/UnrealEngine.dir/src/Figure.cpp.o: /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Figure.cpp
CMakeFiles/UnrealEngine.dir/src/Figure.cpp.o: CMakeFiles/UnrealEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UnrealEngine.dir/src/Figure.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/UnrealEngine.dir/src/Figure.cpp.o -MF CMakeFiles/UnrealEngine.dir/src/Figure.cpp.o.d -o CMakeFiles/UnrealEngine.dir/src/Figure.cpp.o -c /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Figure.cpp

CMakeFiles/UnrealEngine.dir/src/Figure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnrealEngine.dir/src/Figure.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Figure.cpp > CMakeFiles/UnrealEngine.dir/src/Figure.cpp.i

CMakeFiles/UnrealEngine.dir/src/Figure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnrealEngine.dir/src/Figure.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Figure.cpp -o CMakeFiles/UnrealEngine.dir/src/Figure.cpp.s

CMakeFiles/UnrealEngine.dir/src/Plane.cpp.o: CMakeFiles/UnrealEngine.dir/flags.make
CMakeFiles/UnrealEngine.dir/src/Plane.cpp.o: /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Plane.cpp
CMakeFiles/UnrealEngine.dir/src/Plane.cpp.o: CMakeFiles/UnrealEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/UnrealEngine.dir/src/Plane.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/UnrealEngine.dir/src/Plane.cpp.o -MF CMakeFiles/UnrealEngine.dir/src/Plane.cpp.o.d -o CMakeFiles/UnrealEngine.dir/src/Plane.cpp.o -c /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Plane.cpp

CMakeFiles/UnrealEngine.dir/src/Plane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnrealEngine.dir/src/Plane.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Plane.cpp > CMakeFiles/UnrealEngine.dir/src/Plane.cpp.i

CMakeFiles/UnrealEngine.dir/src/Plane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnrealEngine.dir/src/Plane.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Plane.cpp -o CMakeFiles/UnrealEngine.dir/src/Plane.cpp.s

CMakeFiles/UnrealEngine.dir/src/Box.cpp.o: CMakeFiles/UnrealEngine.dir/flags.make
CMakeFiles/UnrealEngine.dir/src/Box.cpp.o: /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Box.cpp
CMakeFiles/UnrealEngine.dir/src/Box.cpp.o: CMakeFiles/UnrealEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/UnrealEngine.dir/src/Box.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/UnrealEngine.dir/src/Box.cpp.o -MF CMakeFiles/UnrealEngine.dir/src/Box.cpp.o.d -o CMakeFiles/UnrealEngine.dir/src/Box.cpp.o -c /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Box.cpp

CMakeFiles/UnrealEngine.dir/src/Box.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnrealEngine.dir/src/Box.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Box.cpp > CMakeFiles/UnrealEngine.dir/src/Box.cpp.i

CMakeFiles/UnrealEngine.dir/src/Box.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnrealEngine.dir/src/Box.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Box.cpp -o CMakeFiles/UnrealEngine.dir/src/Box.cpp.s

CMakeFiles/UnrealEngine.dir/src/Cone.cpp.o: CMakeFiles/UnrealEngine.dir/flags.make
CMakeFiles/UnrealEngine.dir/src/Cone.cpp.o: /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Cone.cpp
CMakeFiles/UnrealEngine.dir/src/Cone.cpp.o: CMakeFiles/UnrealEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/UnrealEngine.dir/src/Cone.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/UnrealEngine.dir/src/Cone.cpp.o -MF CMakeFiles/UnrealEngine.dir/src/Cone.cpp.o.d -o CMakeFiles/UnrealEngine.dir/src/Cone.cpp.o -c /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Cone.cpp

CMakeFiles/UnrealEngine.dir/src/Cone.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnrealEngine.dir/src/Cone.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Cone.cpp > CMakeFiles/UnrealEngine.dir/src/Cone.cpp.i

CMakeFiles/UnrealEngine.dir/src/Cone.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnrealEngine.dir/src/Cone.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Cone.cpp -o CMakeFiles/UnrealEngine.dir/src/Cone.cpp.s

CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.o: CMakeFiles/UnrealEngine.dir/flags.make
CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.o: /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Sphere.cpp
CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.o: CMakeFiles/UnrealEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.o -MF CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.o.d -o CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.o -c /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Sphere.cpp

CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Sphere.cpp > CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.i

CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Sphere.cpp -o CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.s

CMakeFiles/UnrealEngine.dir/src/Engine.cpp.o: CMakeFiles/UnrealEngine.dir/flags.make
CMakeFiles/UnrealEngine.dir/src/Engine.cpp.o: /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Engine.cpp
CMakeFiles/UnrealEngine.dir/src/Engine.cpp.o: CMakeFiles/UnrealEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/UnrealEngine.dir/src/Engine.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/UnrealEngine.dir/src/Engine.cpp.o -MF CMakeFiles/UnrealEngine.dir/src/Engine.cpp.o.d -o CMakeFiles/UnrealEngine.dir/src/Engine.cpp.o -c /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Engine.cpp

CMakeFiles/UnrealEngine.dir/src/Engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnrealEngine.dir/src/Engine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Engine.cpp > CMakeFiles/UnrealEngine.dir/src/Engine.cpp.i

CMakeFiles/UnrealEngine.dir/src/Engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnrealEngine.dir/src/Engine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Engine.cpp -o CMakeFiles/UnrealEngine.dir/src/Engine.cpp.s

CMakeFiles/UnrealEngine.dir/src/Parser.cpp.o: CMakeFiles/UnrealEngine.dir/flags.make
CMakeFiles/UnrealEngine.dir/src/Parser.cpp.o: /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Parser.cpp
CMakeFiles/UnrealEngine.dir/src/Parser.cpp.o: CMakeFiles/UnrealEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/UnrealEngine.dir/src/Parser.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/UnrealEngine.dir/src/Parser.cpp.o -MF CMakeFiles/UnrealEngine.dir/src/Parser.cpp.o.d -o CMakeFiles/UnrealEngine.dir/src/Parser.cpp.o -c /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Parser.cpp

CMakeFiles/UnrealEngine.dir/src/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnrealEngine.dir/src/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Parser.cpp > CMakeFiles/UnrealEngine.dir/src/Parser.cpp.i

CMakeFiles/UnrealEngine.dir/src/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnrealEngine.dir/src/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/Parser.cpp -o CMakeFiles/UnrealEngine.dir/src/Parser.cpp.s

CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.o: CMakeFiles/UnrealEngine.dir/flags.make
CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.o: /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/tinyxml2.cpp
CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.o: CMakeFiles/UnrealEngine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.o -MF CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.o.d -o CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.o -c /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/tinyxml2.cpp

CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/tinyxml2.cpp > CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.i

CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/src/tinyxml2.cpp -o CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.s

# Object files for target UnrealEngine
UnrealEngine_OBJECTS = \
"CMakeFiles/UnrealEngine.dir/src/Figure.cpp.o" \
"CMakeFiles/UnrealEngine.dir/src/Plane.cpp.o" \
"CMakeFiles/UnrealEngine.dir/src/Box.cpp.o" \
"CMakeFiles/UnrealEngine.dir/src/Cone.cpp.o" \
"CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.o" \
"CMakeFiles/UnrealEngine.dir/src/Engine.cpp.o" \
"CMakeFiles/UnrealEngine.dir/src/Parser.cpp.o" \
"CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.o"

# External object files for target UnrealEngine
UnrealEngine_EXTERNAL_OBJECTS =

UnrealEngine: CMakeFiles/UnrealEngine.dir/src/Figure.cpp.o
UnrealEngine: CMakeFiles/UnrealEngine.dir/src/Plane.cpp.o
UnrealEngine: CMakeFiles/UnrealEngine.dir/src/Box.cpp.o
UnrealEngine: CMakeFiles/UnrealEngine.dir/src/Cone.cpp.o
UnrealEngine: CMakeFiles/UnrealEngine.dir/src/Sphere.cpp.o
UnrealEngine: CMakeFiles/UnrealEngine.dir/src/Engine.cpp.o
UnrealEngine: CMakeFiles/UnrealEngine.dir/src/Parser.cpp.o
UnrealEngine: CMakeFiles/UnrealEngine.dir/src/tinyxml2.cpp.o
UnrealEngine: CMakeFiles/UnrealEngine.dir/build.make
UnrealEngine: /usr/lib/x86_64-linux-gnu/libGL.so
UnrealEngine: /usr/lib/x86_64-linux-gnu/libGLU.so
UnrealEngine: /usr/lib/x86_64-linux-gnu/libglut.so
UnrealEngine: CMakeFiles/UnrealEngine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable UnrealEngine"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UnrealEngine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UnrealEngine.dir/build: UnrealEngine
.PHONY : CMakeFiles/UnrealEngine.dir/build

CMakeFiles/UnrealEngine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UnrealEngine.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UnrealEngine.dir/clean

CMakeFiles/UnrealEngine.dir/depend:
	cd /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/retr0/Repositorios/CG2025-UMINHO/phase1/code /home/retr0/Repositorios/CG2025-UMINHO/phase1/code /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build /home/retr0/Repositorios/CG2025-UMINHO/phase1/code/build/CMakeFiles/UnrealEngine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/UnrealEngine.dir/depend

