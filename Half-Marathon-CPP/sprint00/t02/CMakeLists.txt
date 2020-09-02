project(walletManager)

set(CMAKE_CXX_STANDARD 17)

include_directories(walletManager.h)
add_executable(walletManager walletManager.cpp main.cpp)
