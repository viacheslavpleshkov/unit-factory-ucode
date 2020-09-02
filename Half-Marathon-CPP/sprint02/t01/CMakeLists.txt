project(countUniqueWords)
set(CMAKE_CXX_STANDARD 17)
cmake_minimum_required(VERSION 3.17)
include_directories(src)

add_compile_options(
        -pipe
        -Wall
        -Wextra
        -Werror
        -Wpedantic
)

add_executable(countUniqueWords main.cpp src/errors.cpp src/parsFile.cpp src/createFile.cpp)