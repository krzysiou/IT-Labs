# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.21.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.21.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5/build"

# Include any dependencies generated for this target.
include CMakeFiles/Map.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Map.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Map.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Map.dir/flags.make

CMakeFiles/Map.dir/src/MyList.cpp.o: CMakeFiles/Map.dir/flags.make
CMakeFiles/Map.dir/src/MyList.cpp.o: ../src/MyList.cpp
CMakeFiles/Map.dir/src/MyList.cpp.o: CMakeFiles/Map.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Map.dir/src/MyList.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Map.dir/src/MyList.cpp.o -MF CMakeFiles/Map.dir/src/MyList.cpp.o.d -o CMakeFiles/Map.dir/src/MyList.cpp.o -c "/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5/src/MyList.cpp"

CMakeFiles/Map.dir/src/MyList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Map.dir/src/MyList.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5/src/MyList.cpp" > CMakeFiles/Map.dir/src/MyList.cpp.i

CMakeFiles/Map.dir/src/MyList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Map.dir/src/MyList.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5/src/MyList.cpp" -o CMakeFiles/Map.dir/src/MyList.cpp.s

# Object files for target Map
Map_OBJECTS = \
"CMakeFiles/Map.dir/src/MyList.cpp.o"

# External object files for target Map
Map_EXTERNAL_OBJECTS =

libMap.a: CMakeFiles/Map.dir/src/MyList.cpp.o
libMap.a: CMakeFiles/Map.dir/build.make
libMap.a: CMakeFiles/Map.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMap.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Map.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Map.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Map.dir/build: libMap.a
.PHONY : CMakeFiles/Map.dir/build

CMakeFiles/Map.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Map.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Map.dir/clean

CMakeFiles/Map.dir/depend:
	cd "/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5" "/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5" "/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5/build" "/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5/build" "/Users/krzysiektluszcz/Desktop/III SEM/Oiektowka/Laby/lab5/build/CMakeFiles/Map.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Map.dir/depend

