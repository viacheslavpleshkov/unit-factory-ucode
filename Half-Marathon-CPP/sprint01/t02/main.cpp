#include "src/visitAll.h"

int main(int argc, char **argv) {
    std::deque<City> city_list;
    std::deque<City> city_full;

    error(argc);
    insertCity(argc, argv,city_list);
    algorithmCity(argc, city_list, city_full);
    printCity(city_full);
    return 0;
}