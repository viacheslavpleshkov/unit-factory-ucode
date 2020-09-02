#include "countUniqueWords.h"

void createFile(std::string file_name, std::multiset <std::string> names) {
    std::string temp;
    std::stringstream stringstream;

    stringstream << file_name;
    getline(stringstream, temp, '.');
    std::ofstream newfile(temp + "_mod.txt");

    std::string temp_item;
    for (auto item = names.begin(); item != names.end(); item++) {
        if (*item != temp_item)
            newfile << *item << ": " << names.count(*item) << std::endl;
        temp_item = *item;
    }

    newfile.close();
}