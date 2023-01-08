cmake_minimum_required(VERSION 3.24)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(Geometric)

set(CMAKE_CXX_STANDARD 20)

add_executable(Geometric main.cpp rectangle.h rectangle.cpp)
