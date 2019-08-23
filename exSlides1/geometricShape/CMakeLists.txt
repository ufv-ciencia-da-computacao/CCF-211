cmake_minimum_required(VERSION 2.6)
project(GEOM_SHAPE)

set(SOURCE_FILES ./libPoint/point.h ./libPoint/point.c ./lib/geometricShape.c ./lib/geometricShape.h main.c)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

add_executable(GEOM_SHAPE ${SOURCE_FILES})
target_link_libraries(GEOM_SHAPE m)