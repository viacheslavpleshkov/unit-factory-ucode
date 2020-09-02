#include <algorithm>
#include <forward_list>
#include <fstream>
#include <iostream>
#include <ostream>
#include <sstream>
#include <string>
#include <regex>
#include <map>

void print_map(std::multimap <std::string, std::string> &names) {
    int iter = 1;
    std::string prev;
    for (auto item : names) {
        if (item.first.size() != 0) {
            if (prev != item.first) {
                iter = 1;
                std::cout << item.first << ":" << std::endl;
                prev = item.first;
            }
            std::cout << " " << iter << ": " << item.second << std::endl;
            iter++;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "usage: ./tesLibrary [file_name]" << std::endl;
        exit(1);
    } else {
        int i = 0;
        std::string item_name;
        std::ifstream nameFileout(argv[1]);
        std::smatch matches;
        std::multimap <std::string, std::string> names;

        if (!nameFileout) {
            std::cerr << "error" << std::endl;
            exit(1);
        }
        std::regex reg("\\s*\"([^\"]+)\"\\s*:\\s*\"([^\"]+)\"\\s*");

        while (getline(nameFileout, item_name)) {
            if (!item_name.empty()) {
                std::regex_match(item_name, matches, reg);
                names.insert(std::pair<std::string, std::string>(matches[1], matches[2]));
            }
            i++;
            if (matches.empty()) {
                std::cerr << "Line " << i << " is invalid" << std::endl;
                exit(1);
            }
        }

        print_map(names);

        nameFileout.close();
    }
}
