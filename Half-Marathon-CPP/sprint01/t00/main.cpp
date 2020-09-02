#include "src/simpleSort.h"

int main(int argc, char **argv) {

    errors(argc);
    std::array<std::string, 5> array;
    arrayInsert(argv, array);
    arraySort(array);
    arrayPrint(array);
    return 0;
}