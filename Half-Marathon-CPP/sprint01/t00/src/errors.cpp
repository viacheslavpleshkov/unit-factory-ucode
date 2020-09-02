#include "simpleSort.h"

void errors(int argc) {
    if (argc != 6) {
        std::cerr << "usage: ./simpleSort arg1 arg2 arg3 arg4 arg5" << std::endl;
        exit(1);
    }
}