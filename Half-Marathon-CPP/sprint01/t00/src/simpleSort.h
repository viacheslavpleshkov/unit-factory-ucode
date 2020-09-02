#ifndef SIMPLE_SORT_H_
#define SIMPLE_SORT_H_

#include <iostream>
#include <string>
#include <array>

void errors(int argc);
void arrayInsert(char **argv, std::array<std::string, 5>& array);
void arraySort(std::array<std::string, 5>& array);
void arrayPrint(std::array<std::string, 5> array);

#endif //SIMPLE_SORT_H_
