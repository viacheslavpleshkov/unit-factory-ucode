#ifndef VISIT_ALL_H_
#define VISIT_ALL_H_

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <sstream>

struct City {
    std::string name;
    std::string stamina;
    std::string distance;
    int counter;
};
void error(int argc);
void insertCity(int argc, char **argv, std::deque<City>& city_list);
City *createCity(char *str, int counter);
void algorithmCity(int argc, std::deque<City> city_list, std::deque<City>& city_full);
void printCity(std::deque<City> city_full);
#endif