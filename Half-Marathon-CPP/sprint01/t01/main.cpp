#include "src/moveAlong.h"

int main(int argc, char **argv) {
    errors(argc);
    std::vector<std::string> arguments;

    for (int i = 1; i < argc; ++i)
        arguments.push_back(argv[i]);
    moveAlong(arguments);
    return 0;
}