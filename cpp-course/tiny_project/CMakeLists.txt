cmake_minimum_required(VERSION 3.22)
project(tiny_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(tiny_project src/main.cpp src/functions/functions.h src/functions/calc.cpp)
