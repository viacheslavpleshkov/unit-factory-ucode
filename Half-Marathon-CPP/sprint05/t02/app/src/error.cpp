#include "draugr.h"

void error(int argc) {
    if (!IsInRange(argc, 4, 5)) {
        std::cerr << "usage: ./draugr [shoutNumber] [name1,name2] [health] [frostResist]\n";
        exit(1);
    }
}