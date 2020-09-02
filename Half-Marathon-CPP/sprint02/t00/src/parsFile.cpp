#include "uniqueWords.h"

void parsFile(std::ifstream& file, std::set<std::string>& names) {
    std::string temp;
    std::regex regex("[A-Za-z0-9'-]+");
    std::smatch matches;

    while (getline(file, temp)) {
        while(std::regex_search(temp, matches, regex)) {
            names.insert(matches.str());
            temp = matches.suffix();
        }
    }
}