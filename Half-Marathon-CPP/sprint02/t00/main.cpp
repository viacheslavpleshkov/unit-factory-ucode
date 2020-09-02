#include "src/uniqueWords.h"

int main(int argc, char **argv) {
    errors(argc);
    std::ifstream file(argv[1]);
    std::set<std::string> names;

    errorOpenFile(file);
    parsFile(file, names);
    errorNameSize(std::distance(names.begin(), names.end()));
    createFile(argv[1], names);
    file.close();
    return 0;
}