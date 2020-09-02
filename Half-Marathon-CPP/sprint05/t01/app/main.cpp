#include "src/draugr.h"

int main(int argc, char **argv) {
    error(argc);
    try {
        std::regex integer("(\\+|-)?[[:digit:]]+");
        if (argc == 2) {
            if (!regex_match(argv[1], integer))
                throw false;
            else
                Draugr().shoutPhrase(std::stoi(argv[1]));
        } else if (argc == 3) {
            if (!regex_match(argv[1], integer) &&
                !regex_match(argv[2], integer))
                throw false;
            else
                Draugr(std::stoi(argv[2])).shoutPhrase(std::stoi(argv[1]));
        } else if (argc == 4) {
            if (!regex_match(argv[1], integer) &&
                !regex_match(argv[2], integer) &&
                !regex_match(argv[3], integer))
                throw false;
            else
                Draugr(std::stoi(argv[2]), std::stoi(argv[3])).shoutPhrase(std::stoi(argv[1]));
        }
    } catch (...) {
        std::cerr << "Error\n";
        exit(1);;
    }
    return 0;
}