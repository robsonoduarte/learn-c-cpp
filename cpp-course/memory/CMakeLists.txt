cmake_minimum_required(VERSION 3.22)
project(memory)

set(CMAKE_CXX_STANDARD 14)

add_executable(memory copy.cpp)
add_executable(references references.cpp)
add_executable(dereference dereference.cpp)
add_executable(pointer pointer.cpp)
