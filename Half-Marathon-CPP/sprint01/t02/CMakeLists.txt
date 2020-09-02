project(visitAll)
set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_subdirectory(src)

add_executable(
        visitAll
        main.cpp
        src/createCity.cpp
        src/printCity.cpp
        src/algorithmCity.cpp
        src/insertCity.cpp
        src/error.cpp
)

add_compile_options(
        -pipe
        -Wall
        -Wextra
        -Werror
        -Wpedantic
)