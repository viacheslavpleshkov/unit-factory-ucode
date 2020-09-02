#include "bookSaver.h"

void listBook(std::vector <std::string> &command, std::map <std::string, std::string> &books) {
    if (command.size() != 1) {
        std::cout << "Invalid command." << std::endl;
        return;
    }

    std::map<std::string, std::string>::iterator it;
    for (it = books.begin(); it != books.end(); it++)
        std::cout << it->first << std::endl;
}