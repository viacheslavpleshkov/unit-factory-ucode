#include "visitAll.h"

void algorithmCity(int argc, std::deque<City> city_list, std::deque<City>& city_full) {
    int first = 0;

    for (int i = 0; i < argc - 1; i++) {
        if (std::stoi(city_list[i].stamina) > std::stoi(city_list[i].distance)) {
            first = i;
            for (int j = i; j < argc - 1; j++)
                city_full.push_back(city_list[j]);
            for (int j = 0; j < first; ++j)
                city_full.push_back(city_list[j]);
            break;
        }
        if (first == 0 && i == argc - 2) {
            std::cerr << "Mission: Impossible\n";
            exit(1);
        }
    }
}