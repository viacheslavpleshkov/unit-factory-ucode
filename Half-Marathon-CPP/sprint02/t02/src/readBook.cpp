#include "bookSaver.h"

void readBook(std::vector <std::string> &command, std::map <std::string, std::string> &books) {
    if (command.size() != 2) {
        std::cout << "read <bookName>" << std::endl;
        return;
    }

    std::map<std::string, std::string>::iterator it = books.find(command[1]);

    if(it == books.end())
        std::cout << "invalid book";
    else
        std::cout << it->second ;
    std::cout << std::endl ;
}