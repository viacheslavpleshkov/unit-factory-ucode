project(stdAlgoV1)
set(CMAKE_CXX_STANDARD 17)

include_directories(src/stdAlgoV1.h)
add_executable(stdAlgoV1 main.cpp src/errors.cpp src/pars.cpp src/print.cpp)

add_compile_options(
        -pipe
        -Wall
        -Wextra
        -Werror
        -Wpedantic
)