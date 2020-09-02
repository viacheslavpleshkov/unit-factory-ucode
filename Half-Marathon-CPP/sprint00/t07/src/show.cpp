#include "inventory.h"

void show(std::vector<std::string> &command, std::list<std::string> &list) {
    if (command.size() > 1) {
        std::cout << "Invalid command." << std::endl;
        return;
    }
    std::cout << "Inventory { ";
    for (auto const &i: list)
        std::cout << i << " ";
    for (int i = list.size(); i < 12; i++) {
        std::cout << "- ";
    }
    std::cout << "}" << std::endl;
}