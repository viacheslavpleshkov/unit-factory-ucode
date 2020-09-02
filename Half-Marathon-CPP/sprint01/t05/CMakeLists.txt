project(stdAlgoV2)
set(CMAKE_CXX_STANDARD 17)

include_directories(src/stdAlgoV2.h)
add_executable(stdAlgoV2 main.cpp src/errors.cpp src/parseAndPrint.cpp src/createNameNewFile.cpp)

add_compile_options(
        -pipe
        -Wall
        -Wextra
        -Werror
        -Wpedantic
)