#include "inventory.h"

void manager(std::vector<std::string> &command, std::list<std::string> &list) {
    if (command[0] == "exit")
        exit_program(command);
    else if (command[0] == "help")
        help(command);
    else if (command[0] == "show")
        show(command, list);
    else if (command[0] == "insert")
        insert(command, list);
    else if (command[0] == "remove")
        remove(command, list);
    else
        std::cout << "Invalid command." << std::endl;
}