# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\cmake-build-cmakelists

# Include any dependencies generated for this target.
include CMakeFiles/Project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project.dir/flags.make

CMakeFiles/Project.dir/main.c.obj: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\cmake-build-cmakelists\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Project.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Project.dir\main.c.obj   -c C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\main.c

CMakeFiles/Project.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\main.c > CMakeFiles\Project.dir\main.c.i

CMakeFiles/Project.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\main.c -o CMakeFiles\Project.dir\main.c.s

CMakeFiles/Project.dir/functions.c.obj: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/functions.c.obj: ../functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\cmake-build-cmakelists\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Project.dir/functions.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Project.dir\functions.c.obj   -c C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\functions.c

CMakeFiles/Project.dir/functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project.dir/functions.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\functions.c > CMakeFiles\Project.dir\functions.c.i

CMakeFiles/Project.dir/functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project.dir/functions.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\functions.c -o CMakeFiles\Project.dir\functions.c.s

# Object files for target Project
Project_OBJECTS = \
"CMakeFiles/Project.dir/main.c.obj" \
"CMakeFiles/Project.dir/functions.c.obj"

# External object files for target Project
Project_EXTERNAL_OBJECTS =

Project.exe: CMakeFiles/Project.dir/main.c.obj
Project.exe: CMakeFiles/Project.dir/functions.c.obj
Project.exe: CMakeFiles/Project.dir/build.make
Project.exe: CMakeFiles/Project.dir/linklibs.rsp
Project.exe: CMakeFiles/Project.dir/objects1.rsp
Project.exe: CMakeFiles/Project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\cmake-build-cmakelists\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Project.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Project.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project.dir/build: Project.exe

.PHONY : CMakeFiles/Project.dir/build

CMakeFiles/Project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Project.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Project.dir/clean

CMakeFiles/Project.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\cmake-build-cmakelists C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\cmake-build-cmakelists C:\Users\pumpk\Desktop\git\4156b601-gr13-repo\Project\cmake-build-cmakelists\CMakeFiles\Project.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project.dir/depend

