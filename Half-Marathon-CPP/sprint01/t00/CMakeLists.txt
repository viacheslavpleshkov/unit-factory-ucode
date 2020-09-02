project(simpleSort)
set(CMAKE_CXX_STANDARD 17)

include_directories(src/simpleSort.h)
add_executable(simpleSort main.cpp src/array.cpp src/errors.cpp)