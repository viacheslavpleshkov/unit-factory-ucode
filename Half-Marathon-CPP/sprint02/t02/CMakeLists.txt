project(bookSaver)
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

add_executable(
        bookSaver
        main.cpp
        src/manager.cpp
        src/addBook.cpp
        src/listBook.cpp
        src/readBook.cpp
        src/deleteBook.cpp
        src/exit_program.cpp
)