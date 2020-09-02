#include "src/bookSaver.h"

int main(void) {
    std::string input;
    std::stringstream ss;
    std::vector <std::string> command;
    std::map <std::string, std::string> books;

    while (1) {
        std::cout << "Enter command:> ";
        std::getline(std::cin, input, '\n');
        ss << input;
        while (std::getline(ss, input, ' '))
            command.push_back(input);
        manager(command, books);
        input.clear();
        ss.clear();
        command.clear();
    }
    return 0;
}