cmake_minimum_required(VERSION 3.18.1)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -std=c++17)

project(basicString)

include_directories(src)
include_directories(utils)

file(GLOB CPPS "src/*.cpp" "main.cpp")

add_executable(${PROJECT_NAME} ${CPPS})