cmake_minimum_required(VERSION 3.5)
project(lab2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp lib/NFA.cpp lib/NFA.h lib/utilities.cpp lib/utilities.h lib/Stack.cpp lib/Stack.h lib/Thompson.cpp lib/Thompson.h lib/nfaStructs.h lib/PostFix.cpp lib/PostFix.h)
add_executable(lab2 ${SOURCE_FILES})