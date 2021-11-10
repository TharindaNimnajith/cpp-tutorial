cmake_minimum_required(VERSION 3.20)
project(cpp_tutorial)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_tutorial getting-started/linker-error.cpp getting-started/ex1.cpp clion-test/Student.cpp clion-test/Student.h clion-test/Employee.h clion-test/Employee.cpp)
