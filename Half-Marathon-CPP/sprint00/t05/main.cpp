#include <iostream>
#include <string>

static void ender(char *str, size_t pointer) {
    if (str[pointer] != 0)
        throw 1;
}

static void validation(char **argv) {
    int counter = 2;
    auto pointer = 0ul;

    try {
        std::stoi(argv[counter], &pointer);
        ender(argv[counter], pointer);
        std::stof(argv[++counter], &pointer);
        ender(argv[counter], pointer);
        std::stod(argv[++counter], &pointer);
        ender(argv[counter], pointer);
    } catch (...) {
        std::cerr << "Invalid argument: " << argv[counter] << std::endl;
        exit(1);
    }
}

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cerr << "usage:./automaton [name] [level] [health] [stamina]" << std::endl;
        return 1;
    } else
        validation(argv);
    std::cout << "Name = " << argv[1] << std::endl;
    std::cout << "Level = " << argv[2] << std::endl;
    std::cout << "Health = " << argv[3] << std::endl;
    std::cout << "Stamina = " << argv[4] << std::endl;
    return 0;
}