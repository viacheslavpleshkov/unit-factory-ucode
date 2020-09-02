#include "simpleSort.h"

void arrayInsert(char **argv, std::array<std::string, 5>& array) {
    for (int i = 1; i < 6; ++i)
        array[i - 1] = argv[i];
}

void arraySort(std::array<std::string, 5>& array)  {
    std::sort(array.begin(), array.end());
}

void arrayPrint(std::array<std::string, 5> array) {
    for (int i = 0; i < 5; i++) {
        std::cout << array[i];
        if (i != 4)
            std::cout << " ";
    }
    std::cout << std::endl;
}