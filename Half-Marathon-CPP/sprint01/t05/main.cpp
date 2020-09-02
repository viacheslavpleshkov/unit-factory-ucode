#include "src/stdAlgoV2.h"

bool chekForName(std::string str) {
    for (char i : str) {
        if (isspace(i) == 0)
            return true;
    }
    return false;
}

int main(int argc, char **argv) {
    error(argc);
    std::forward_list <std::string> names;
    std::string temp;
    std::ifstream file(argv[1]);

    errorOpenFile(file);

    while (getline(file, temp))
        if (chekForName(temp))
            names.push_front(temp)
    errorForwardSize(std::distance(names.begin(), names.end()));
    parseAndPrint(names, creaneNameNewFile(argv[1]));
    return 0;
}