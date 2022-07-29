cmake_minimum_required(VERSION 3.22)
project(classes_objects)

set(CMAKE_CXX_STANDARD 14)

add_executable(classes_objects classes_objects.cpp)
add_executable(destructor destructor.cpp)
add_executable(constructor constructor.cpp)
add_executable(private private.cpp)
add_executable(copy_constructor copy_constructor.cpp)
