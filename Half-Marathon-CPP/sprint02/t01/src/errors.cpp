#include "countUniqueWords.h"

void errors(int argc) {
    if (argc != 2) {
        std::cerr << "usage: ./countUniqueWord [file_name]\n";
        exit(1);
    }   
}

void errorOpenFile(std::ifstream &file) {
    if (!file.is_open()) {
        std::cerr << "error\n";
        exit(1);
    }
}

void errorNameSize(int name_size) {
    if (name_size == 0) {
        std::cerr << "error\n";
        exit(1);
    }
}