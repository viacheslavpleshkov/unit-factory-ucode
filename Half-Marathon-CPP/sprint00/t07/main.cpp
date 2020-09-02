#include "src/inventory.h"

int main() {
    std::string input;
    std::stringstream ss;
    std::vector<std::string> command;
    std::list<std::string> list;

    while (1) {
        std::cout << "Enter command:> ";
        std::getline(std::cin, input, '\n');
        ss << input;
        while (std::getline(ss, input, ' '))
            command.push_back(input);
        manager(command, list);
        input.clear();
        ss.clear();
        command.clear();
    }
    return 0;
}