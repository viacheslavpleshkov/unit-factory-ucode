#include "visitAll.h"

void error(int argc) {
    if (argc == 1) {
        std::cerr << "usage: ./visitAll [[name,stamina,distance] ...]\n";
        exit(1);
    }
}
