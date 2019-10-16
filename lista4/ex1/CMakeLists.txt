cmake_minimum_required(VERSION 2.6)
project(EX1)

set(SOURCE_FILES ./lib/queue.h ./lib/queue.c ./lib/stack.h ./lib/stack.c main.c)

add_executable(EX1 ${SOURCE_FILES})