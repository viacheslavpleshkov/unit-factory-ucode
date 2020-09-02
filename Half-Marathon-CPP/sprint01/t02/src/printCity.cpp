#include "visitAll.h"

void printCity(std::deque<City> city_full) {
    for (int i = 0; i < city_full.size(); i++) {
        std::cout << city_full[i].counter << " ";
        std::cout << city_full[i].name << std::endl;
    }
}