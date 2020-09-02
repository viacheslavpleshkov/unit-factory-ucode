#include "bookSaver.h"

void deleteBook(std::vector <std::string> &command, std::map <std::string, std::string> &books) {
    if (command.size() != 2) {
        std::cout << "delete<bookName>" << std::endl;
        return;
    }
    std::map<std::string, std::string>::iterator it;
    it = books.find(command[1]);
    if (it == books.end()) {
        std::cout << "invalid book" << std::endl;
        return;
    }
    books.erase(it);
    std::cout << command[1] << " deleted" << std::endl;
}