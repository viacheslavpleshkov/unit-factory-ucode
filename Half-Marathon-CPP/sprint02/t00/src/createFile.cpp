#include "uniqueWords.h"

void createFile(std::string file_name, std::set<std::string> names) {
    std::string temp;
    std::stringstream stringstream;

    stringstream << file_name;
    getline(stringstream, temp, '.');
    std::ofstream newfile(temp + "_mod.txt");

    for (auto item : names)
        newfile << item << std::endl;
    newfile.close();
}