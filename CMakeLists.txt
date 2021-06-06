cmake_minimum_required(VERSION 3.9)
project(cpp_skeleton)
set(CMAKE_CXX_STANDARD 11)

# No debug symbols
set(default_build_type Release)

# Make a static binary
set(CMAKE_FIND_LIBRARY_SUFFIXES .a)
set(BUILD_SHARED_LIBS OFF)
set(CMAKE_EXE_LINKER_FLAGS -static)

add_executable(cppsk src/boilerplate.cpp)
