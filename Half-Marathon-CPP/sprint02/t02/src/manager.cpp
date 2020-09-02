#include "bookSaver.h"

void manager(std::vector<std::string> &command, std::map<std::string, std::string> &books) {
    if (command[0] == "quit")
        exit_program(command);
    else if (command[0] == "list")
        listBook(command, books);
    else if (command[0] == "read")
        readBook(command, books);
    else if (command[0] == "add")
        addBook(command, books);
    else if (command[0] == "delete")
        deleteBook(command, books);
    else
        std::cout << "Invalid command." << std::endl;
}