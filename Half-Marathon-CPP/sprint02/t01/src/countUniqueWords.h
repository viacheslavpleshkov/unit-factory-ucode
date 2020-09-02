#ifndef COUNT_UNIQUE_WORDS_H_
#define COUNT_UNIQUE_WORDS_H_

#include <iostream>
#include <string>
#include <regex>
#include <sstream>
#include <fstream>
#include <map>

void errors(int argc);
void errorOpenFile(std::ifstream &file);
void errorNameSize(int name_size);
void parsFile(std::ifstream& file, std::multiset<std::string>& names);
void createFile(std::string file_name, std::multiset<std::string> names);
#endif //COUNT_UNIQUE_WORDS_H_
