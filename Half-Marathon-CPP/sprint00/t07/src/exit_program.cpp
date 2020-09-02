#include "inventory.h"

void exit_program(std::vector<std::string> &command) {
    if (command.size() > 1) {
        std::cout << "Invalid command." << std::endl;
        return;
    }
    std::cout << "Bye." << std::endl;
    exit(1);
}
