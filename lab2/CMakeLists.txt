cmake_minimum_required(VERSION 3.5)
project(lab2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp lib/NFA.cpp lib/NFA.h)
add_executable(lab2 ${SOURCE_FILES})