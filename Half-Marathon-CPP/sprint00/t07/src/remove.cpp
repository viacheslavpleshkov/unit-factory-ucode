#include "inventory.h"

void remove(std::vector<std::string> &command, std::list<std::string> &list) {
    if (command.size() < 2) {
        std::cout << "Invalid command." << std::endl;
        return;
    }
    if (std::find(list.begin(), list.end(), command[1]) != list.end()) {
        list.remove(command[1]);
        std::cout << command[1] << " was removed." << std::endl;
    } else
        std::cout << "Invalid item." << std::endl;
}
