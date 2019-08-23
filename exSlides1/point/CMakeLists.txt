cmake_minimum_required(VERSION 2.6)
project(POINT)

set(SOURCE_FILES ./lib/point.h ./lib/point.c main.c)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lm -Wall")

add_executable(POINT ${SOURCE_FILES})
target_link_libraries(POINT m)
