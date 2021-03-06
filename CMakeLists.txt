# CMake build script for CompilerKit
# Building:
# > mkdir build && cd build
# > cmake ..
# > cmake --build .
#
# CMake Tutorial: http://www.cmake.org/cmake/help/cmake_tutorial.html
# CMake Example:  https://github.com/libgit2/libgit2/blob/development/CMakeLists.txt

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(libCompilerKit C)

FIND_PACKAGE (PkgConfig REQUIRED)
pkg_check_modules (GLIB2 glib-2.0>=2.26)
pkg_check_modules (GOBJECT_PKG gobject-2.0)

FILE (GLOB SRC src/*.c)
INCLUDE_DIRECTORIES(${GLIB2_INCLUDE_DIRS} src include)
# Compile and link CompilerKit

ADD_LIBRARY(CompilerKit ${SRC})

ADD_EXECUTABLE(compilerkit-demo examples/demo.c)
# TARGET_LINK_LIBRARIES(compilerkit-demo CompilerKit)
