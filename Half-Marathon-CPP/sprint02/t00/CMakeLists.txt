project(uniqueWords)
set(CMAKE_CXX_STANDARD 17)
cmake_minimum_required(VERSION 3.17)

include_directories(src/uniqueWords.h)

add_compile_options(
        -pipe
        -Wall
        -Wextra
        -Werror
        -Wpedantic
)

add_executable(uniqueWords main.cpp src/errors.cpp src/parsFile.cpp src/createFile.cpp)