#include "stdAlgoV1.h"

void print(bool rich, bool length, bool vel, int mel) {
    if (rich)
        std::cout << "contains 'rich': true" << std::endl;
    else
        std::cout << "contains 'rich': false" << std::endl;
    if (length)
        std::cout << "none of lengths is 15: false" << std::endl;
    else
        std::cout << "none of lengths is 15: true" << std::endl;
    if (vel)
        std::cout << "all end with 'vel': true" << std::endl;
    else
        std::cout << "all end with 'vel': false" << std::endl;
    std::cout << "not contains 'mel': " << mel << std::endl;
}