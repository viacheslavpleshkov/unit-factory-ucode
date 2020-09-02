#ifndef INVENTORY_H_
#define INVENTORY_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

int checker(std::string type);
void insert(std::vector<std::string> &command, std::list<std::string> &list);
void remove(std::vector<std::string> &command, std::list<std::string> &list);
void show(std::vector<std::string> &command, std::list<std::string> &list);
void help(std::vector<std::string> &command);
void exit_program(std::vector<std::string> &command);
void manager(std::vector<std::string> &command, std::list<std::string> &list);

#endif  // INVENTORY_H_