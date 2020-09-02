#include "src/draugr.h"
#include "algorithmUtils.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: ./draugr [shoutNumber]\n";
        exit(1);
    }
    try {
        std::regex integer("(\\+|-)?[[:digit:]]+");
        if (!regex_match(argv[1], integer))
            throw false;
        else {
            Draugr draugr;
            draugr.shoutPhrase(std::stoi(argv[1]));
        }
    } catch (...) {
        std::cerr << "Invalid shoutNumber\n";
        exit(1);
    }
    return 0;
}