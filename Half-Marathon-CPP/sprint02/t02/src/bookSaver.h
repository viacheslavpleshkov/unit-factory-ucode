#ifndef BOOK_SAVER_H_
#define BOOK_SAVER_H_

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <map>

int main(void);
void manager(std::vector<std::string> &command, std::map<std::string, std::string> &books);
void addBook(std::vector<std::string> &command, std::map<std::string, std::string> &books);
void listBook(std::vector <std::string> &command, std::map <std::string, std::string> &books);
void readBook(std::vector <std::string> &command, std::map <std::string, std::string> &books);
void deleteBook(std::vector <std::string> &command, std::map <std::string, std::string> &books);
void exit_program(std::vector<std::string> &command);

#endif