cmake_minimum_required(VERSION 3.16)
project(wildfire)

set(CMAKE_CXX_STANDARD 20)

add_executable(wildfire main.cpp Screen.cpp Screen.h Color.cpp Color.h)