# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.4

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lixiaoning/Program/CppDemos/XmppDemo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lixiaoning/Program/CppDemos/build-XmppDemo-Qt_5_7_1_clang_64-Default

# Include any dependencies generated for this target.
include CMakeFiles/XmppDemo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/XmppDemo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/XmppDemo.dir/flags.make

CMakeFiles/XmppDemo.dir/main.cpp.o: CMakeFiles/XmppDemo.dir/flags.make
CMakeFiles/XmppDemo.dir/main.cpp.o: /Users/lixiaoning/Program/CppDemos/XmppDemo/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lixiaoning/Program/CppDemos/build-XmppDemo-Qt_5_7_1_clang_64-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/XmppDemo.dir/main.cpp.o"
	/usr/bin/clang   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XmppDemo.dir/main.cpp.o -c /Users/lixiaoning/Program/CppDemos/XmppDemo/main.cpp

CMakeFiles/XmppDemo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XmppDemo.dir/main.cpp.i"
	/usr/bin/clang  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lixiaoning/Program/CppDemos/XmppDemo/main.cpp > CMakeFiles/XmppDemo.dir/main.cpp.i

CMakeFiles/XmppDemo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XmppDemo.dir/main.cpp.s"
	/usr/bin/clang  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lixiaoning/Program/CppDemos/XmppDemo/main.cpp -o CMakeFiles/XmppDemo.dir/main.cpp.s

CMakeFiles/XmppDemo.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/XmppDemo.dir/main.cpp.o.requires

CMakeFiles/XmppDemo.dir/main.cpp.o.provides: CMakeFiles/XmppDemo.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/XmppDemo.dir/build.make CMakeFiles/XmppDemo.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/XmppDemo.dir/main.cpp.o.provides

CMakeFiles/XmppDemo.dir/main.cpp.o.provides.build: CMakeFiles/XmppDemo.dir/main.cpp.o


CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o: CMakeFiles/XmppDemo.dir/flags.make
CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o: XmppDemo_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lixiaoning/Program/CppDemos/build-XmppDemo-Qt_5_7_1_clang_64-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o"
	/usr/bin/clang   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o -c /Users/lixiaoning/Program/CppDemos/build-XmppDemo-Qt_5_7_1_clang_64-Default/XmppDemo_automoc.cpp

CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.i"
	/usr/bin/clang  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lixiaoning/Program/CppDemos/build-XmppDemo-Qt_5_7_1_clang_64-Default/XmppDemo_automoc.cpp > CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.i

CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.s"
	/usr/bin/clang  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lixiaoning/Program/CppDemos/build-XmppDemo-Qt_5_7_1_clang_64-Default/XmppDemo_automoc.cpp -o CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.s

CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o.requires:

.PHONY : CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o.requires

CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o.provides: CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o.requires
	$(MAKE) -f CMakeFiles/XmppDemo.dir/build.make CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o.provides.build
.PHONY : CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o.provides

CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o.provides.build: CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o


# Object files for target XmppDemo
XmppDemo_OBJECTS = \
"CMakeFiles/XmppDemo.dir/main.cpp.o" \
"CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o"

# External object files for target XmppDemo
XmppDemo_EXTERNAL_OBJECTS =

XmppDemo: CMakeFiles/XmppDemo.dir/main.cpp.o
XmppDemo: CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o
XmppDemo: CMakeFiles/XmppDemo.dir/build.make
XmppDemo: /Users/lixiaoning/Qt5.7.1/5.7/clang_64/lib/QtNetwork.framework/QtNetwork
XmppDemo: /Users/lixiaoning/Program/desktopclient/src/lib/Debug/libqxmpp_d.dylib
XmppDemo: /Users/lixiaoning/Qt5.7.1/5.7/clang_64/lib/QtCore.framework/QtCore
XmppDemo: CMakeFiles/XmppDemo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lixiaoning/Program/CppDemos/build-XmppDemo-Qt_5_7_1_clang_64-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable XmppDemo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/XmppDemo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/XmppDemo.dir/build: XmppDemo

.PHONY : CMakeFiles/XmppDemo.dir/build

CMakeFiles/XmppDemo.dir/requires: CMakeFiles/XmppDemo.dir/main.cpp.o.requires
CMakeFiles/XmppDemo.dir/requires: CMakeFiles/XmppDemo.dir/XmppDemo_automoc.cpp.o.requires

.PHONY : CMakeFiles/XmppDemo.dir/requires

CMakeFiles/XmppDemo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/XmppDemo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/XmppDemo.dir/clean

CMakeFiles/XmppDemo.dir/depend:
	cd /Users/lixiaoning/Program/CppDemos/build-XmppDemo-Qt_5_7_1_clang_64-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lixiaoning/Program/CppDemos/XmppDemo /Users/lixiaoning/Program/CppDemos/XmppDemo /Users/lixiaoning/Program/CppDemos/build-XmppDemo-Qt_5_7_1_clang_64-Default /Users/lixiaoning/Program/CppDemos/build-XmppDemo-Qt_5_7_1_clang_64-Default /Users/lixiaoning/Program/CppDemos/build-XmppDemo-Qt_5_7_1_clang_64-Default/CMakeFiles/XmppDemo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/XmppDemo.dir/depend
