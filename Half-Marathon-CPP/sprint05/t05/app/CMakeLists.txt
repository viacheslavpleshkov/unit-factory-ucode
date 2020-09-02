cmake_minimum_required(VERSION 3.18.1)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -std=c++17)
project(werewolf)

include_directories(src)

file(GLOB CPPS "src/*.cpp" "main.cpp")

add_executable(${PROJECT_NAME} ${CPPS})