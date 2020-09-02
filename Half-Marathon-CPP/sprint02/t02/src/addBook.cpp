#include "bookSaver.h"

void addBook(std::vector<std::string> &command, std::map<std::string, std::string> &books) {
    if (command.size() != 2) {
        std::cout << "add <bookName>" << std::endl;
        return;
    }
    std::string full_path = "./library/" + command[1];
    std::ifstream open_book(full_path);
    std::string temp;

    if (!open_book) {
        std::cout << "invalid book" << std::endl;
        return;
    }
    if (books.find(command[1]) == books.end()) {
        while(getline(open_book, temp))
            books[command[1]] += temp + '\n';
    }
    std::cout << command[1] << " added " << std::endl;
}