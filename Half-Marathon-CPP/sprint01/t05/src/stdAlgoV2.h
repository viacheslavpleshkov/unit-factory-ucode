#ifndef STD_ALGO_V2_H_
#define STD_ALGO_V2_H_

#include <iostream>
#include <string>
#include <fstream>
#include <forward_list>
#include <algorithm>
#include <sstream>

void error(int argc);
void errorForwardSize(int forward_size);
void errorOpenFile(std::ifstream &file);
std::string createNameNewFile(const std::string& str);
void parseAndPrint(std::forward_list<std::string> &names, std::string file);

#endif