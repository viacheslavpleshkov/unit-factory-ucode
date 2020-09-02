#include "draugr.h"

void splitName(std::string &name1, std::string &name2, std::string arg) {
    std::regex namesRegex("^(\\w+),(\\w+)$");
    std::smatch groups;

    if (std::regex_search(arg, groups, namesRegex)) {
        name1 = groups[1];
        name2 = groups[2];
    } else {
        std::cerr << "Invalid names\n";
        exit(1);
    }
}
