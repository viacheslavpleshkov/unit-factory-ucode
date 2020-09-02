#include "stdAlgoV2.h"

std::string createNameNewFile(const std::string& str) {
    std::stringstream ss(str);
    std::string temp;
    std::string newFile;
    getline(ss, newFile, '.');
    newFile += "_mod";
    getline(ss, temp);
    if (temp.size() != 0)
        newFile += ".";
    newFile += temp;
    return newFile;
}