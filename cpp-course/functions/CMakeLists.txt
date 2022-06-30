cmake_minimum_required(VERSION 3.22)
project(functions)

set(CMAKE_CXX_STANDARD 14)

add_executable(functions function.cpp)
add_executable(param_copy_reference param_copy_reference.cpp)
add_executable(return return.cpp)
add_executable(recursion recursion.cpp)
add_executable(scope scope.cpp)
add_executable(static_var static_var.cpp)
add_executable(main main.cpp)
add_executable(typedef typedef.cpp)
