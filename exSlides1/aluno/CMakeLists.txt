cmake_minimum_required(VERSION 2.6)
project(ALUNO)

set(SOURCE_FILES ./lib/aluno.h ./lib/aluno.c main.c)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

add_executable(ALUNO ${SOURCE_FILES})