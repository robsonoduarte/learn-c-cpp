cmake_minimum_required(VERSION 3.22)
project(essential-concepts)

set(CMAKE_CXX_STANDARD 14)

add_executable(include include.cpp includes/include.h )
add_executable(define define.cpp)
add_executable(ifdef ifdef.cpp)
add_executable(identifiers identifiers.cpp)