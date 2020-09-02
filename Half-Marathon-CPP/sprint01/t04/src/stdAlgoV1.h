#ifndef STD_ALGO_V1_H_
#define STD_ALGO_V1_H_

#include <iostream>
#include <string>
#include <fstream>
#include <forward_list>
#include <algorithm>

void error(int argc);
void errorForwardSize(int forward_size);
void errorOpenFile(std::ifstream &file);
void pars(std::forward_list<std::string> names);
void print(bool rich, bool length, bool vel, int mel);
#endif