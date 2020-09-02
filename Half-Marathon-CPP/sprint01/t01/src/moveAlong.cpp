#include "moveAlong.h"

void moveAlong(std::vector<std::string> arguments) {
    std::vector<std::string> temp = arguments;

    for (int i = 0; i < temp.size(); i++) {

        for (int j = 0; temp[i][j]; j++)
            temp[i][j] = tolower(temp[i][j]);

        if (temp[i].find("mercer") != std::string::npos ||
            temp[i].find("emer") != std::string::npos ||
            temp[i].find("jim") != std::string::npos)
                std::cout << arguments[i] << ", move along!" << std::endl;
    }
}
