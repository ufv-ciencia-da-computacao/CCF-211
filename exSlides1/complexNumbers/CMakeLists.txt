cmake_minimum_required(VERSION 2.6)
project(COMPLEX_NUMBER)

set(SOURCE_FILES ./lib/complexNumbers.c ./lib/complexNumbers.h main.c)
add_executable(COMPLEX_NUMBER ${SOURCE_FILES})