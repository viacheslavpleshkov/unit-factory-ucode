#include "draugr.h"

void error(int argc) {
    if (!IsInRange(argc, 2, 4)) {
        std::cerr << "usage: ./draugr [shoutNumber] [health] [frostResist]\n";
        exit(1);
    }
}