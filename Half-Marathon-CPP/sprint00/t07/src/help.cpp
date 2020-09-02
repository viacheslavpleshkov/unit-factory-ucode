#include "inventory.h"

void help(std::vector<std::string> &command) {
    if (command.size() > 1) {
        std::cout << "Invalid command." << std::endl;
        return;
    }
    std::cout << "Available commands:\n"
                 "1. insert <itemType>\n"
                 "2. remove <itemType>\n"
                 "3. show inventory\n4. help\n"
                 "5. exit" << std::endl;
}
