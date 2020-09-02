#include "src/draugr.h"

int main(int argc, char **argv) {
    error(argc);
    try {
        std::string name1;
        std::string name2;
        std::regex integer("(\\+|-)?[[:digit:]]+");
        std::regex string("[A-Za-z]");
        splitName(name1, name2, argv[2]);
        if (argc == 3) {
            if (!regex_match(argv[1], integer) &&
                !regex_match(argv[2], string) &&
                !regex_match(argv[3], integer))
                throw false;
            else {
                Draugr draugrOne(std::stoi(argv[3]));
                draugrOne.setName(std::string(name1));
                draugrOne.shoutPhrase(std::stoi(argv[1]));
                Draugr draugrTwo = draugrOne;
                draugrTwo.setName(std::string(name2));
                draugrTwo.shoutPhrase(std::stoi(argv[1]));
            }
        } else {
            if (!regex_match(argv[1], integer) &&
                !regex_match(argv[2], string) &&
                !regex_match(argv[3], integer) &&
                !regex_match(argv[4], integer))
                throw false;
            else {
                Draugr draugrOne(std::stoi(argv[3]));
                draugrOne.setName(std::string(name1));
                draugrOne.shoutPhrase(std::stoi(argv[1]));
                Draugr draugrTwo;
                draugrTwo.setName(std::string(name2));
                draugrTwo.shoutPhrase(std::stoi(argv[1]));
            }
        }
    } catch (...) {
        std::cerr << "Error\n";
        exit(1);
    }
    return 0;
}