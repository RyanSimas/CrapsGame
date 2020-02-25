cmake_minimum_required(VERSION 3.15)
project(CrapsGame)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-fprofile-arcs -ftest-coverage")
add_executable(CrapsGame main.cpp die.cpp die.h GameLogic.cpp GameLogic.h)