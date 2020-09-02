#include "inventory.h"

void insert(std::vector<std::string> &command, std::list<std::string> &list) {
    if (command.size() < 2) {
        std::cout << "Invalid command." << std::endl;
        return;
    }
    if (list.size() == 12) {
        std::cout << "Inventory is full." << std::endl;
        return;
    }
    if (checker(command[1])) {
        list.push_back(command[1]);
        std::cout << command[1] << " was inserted." << std::endl;
    } else
        std::cout << "Invalid item." << std::endl;
}
