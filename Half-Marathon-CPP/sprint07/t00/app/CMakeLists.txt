cmake_minimum_required(VERSION 3.16.3)

project(vector LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
add_subdirectory(src)

add_compile_options(
        -std=c++17
        -Wall
        -Wextra
        -Wpedantic
)

target_link_libraries(vector src)