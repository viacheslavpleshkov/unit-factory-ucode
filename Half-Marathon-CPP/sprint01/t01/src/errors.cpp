#include "moveAlong.h"

void errors(int argc) {
    if (argc == 1) {
        std::cerr << "usage: ./moveAlong [args]" << std::endl;
        exit(1);
    }
}