project(moveAlong)
set(CMAKE_CXX_STANDARD 17)

include_directories(src/moveAlong.h)
add_executable(moveAlong main.cpp src/errors.cpp src/moveAlong.cpp)