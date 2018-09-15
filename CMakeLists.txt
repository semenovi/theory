cmake_minimum_required(VERSION 2.8)
project(theory)
set(SRC_LIST src/main.cpp src/bigint.cpp include/bigint.h)
add_executable(${PROJECT_NAME} ${SRC_LIST})