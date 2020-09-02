project(inventory)
cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

include_directories(src/inventory.h)
add_executable(inventory src/inventory.cpp src/exit_program.cpp src/help.cpp src/insert.cpp src/remove.cpp src/show.cpp src/checker.cpp main.cpp)