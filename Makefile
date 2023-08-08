# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_SOURCE_DIR = /home/chris/projects/asteroids-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chris/projects/asteroids-cpp

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/cmake-gui -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/chris/projects/asteroids-cpp/CMakeFiles /home/chris/projects/asteroids-cpp//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/chris/projects/asteroids-cpp/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named asteroids

# Build rule for target.
asteroids: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 asteroids
.PHONY : asteroids

# fast build rule for target.
asteroids/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/build
.PHONY : asteroids/fast

allegro/font.o: allegro/font.cpp.o
.PHONY : allegro/font.o

# target to build an object file
allegro/font.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/allegro/font.cpp.o
.PHONY : allegro/font.cpp.o

allegro/font.i: allegro/font.cpp.i
.PHONY : allegro/font.i

# target to preprocess a source file
allegro/font.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/allegro/font.cpp.i
.PHONY : allegro/font.cpp.i

allegro/font.s: allegro/font.cpp.s
.PHONY : allegro/font.s

# target to generate assembly for a file
allegro/font.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/allegro/font.cpp.s
.PHONY : allegro/font.cpp.s

allegro/music.o: allegro/music.cpp.o
.PHONY : allegro/music.o

# target to build an object file
allegro/music.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/allegro/music.cpp.o
.PHONY : allegro/music.cpp.o

allegro/music.i: allegro/music.cpp.i
.PHONY : allegro/music.i

# target to preprocess a source file
allegro/music.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/allegro/music.cpp.i
.PHONY : allegro/music.cpp.i

allegro/music.s: allegro/music.cpp.s
.PHONY : allegro/music.s

# target to generate assembly for a file
allegro/music.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/allegro/music.cpp.s
.PHONY : allegro/music.cpp.s

game/objects.o: game/objects.cpp.o
.PHONY : game/objects.o

# target to build an object file
game/objects.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/game/objects.cpp.o
.PHONY : game/objects.cpp.o

game/objects.i: game/objects.cpp.i
.PHONY : game/objects.i

# target to preprocess a source file
game/objects.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/game/objects.cpp.i
.PHONY : game/objects.cpp.i

game/objects.s: game/objects.cpp.s
.PHONY : game/objects.s

# target to generate assembly for a file
game/objects.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/game/objects.cpp.s
.PHONY : game/objects.cpp.s

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/asteroids.dir/build.make CMakeFiles/asteroids.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... asteroids"
	@echo "... allegro/font.o"
	@echo "... allegro/font.i"
	@echo "... allegro/font.s"
	@echo "... allegro/music.o"
	@echo "... allegro/music.i"
	@echo "... allegro/music.s"
	@echo "... game/objects.o"
	@echo "... game/objects.i"
	@echo "... game/objects.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
