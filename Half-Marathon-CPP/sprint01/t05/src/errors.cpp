#include "stdAlgoV2.h"

void error(int argc) {
    if (argc != 2) {
        std::cerr << "usage: ./stdAlgoV2 [file_name]\n";
        exit(1);
    }
}

void errorForwardSize(int forward_size) {
    if (forward_size == 0) {
        std::cerr << "error\n";
        exit(1);
    }
}

void errorOpenFile(std::ifstream &file) {
    if (!file.is_open()) {
        std::cerr << "error\n";
        exit(1);
    }
}