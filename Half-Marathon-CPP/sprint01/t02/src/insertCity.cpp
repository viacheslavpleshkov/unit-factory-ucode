#include "visitAll.h"

void insertCity(int argc, char **argv, std::deque<City>& city_list) {
    for (int i = 1; i < argc; i++)
        city_list.push_back(*createCity(argv[i], i - 1));
}