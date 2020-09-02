#include "stdAlgoV2.h"

bool checkForCbl(std::string str) {
    if (str.find("c") != std::string_view::npos ||
        str.find("b") != std::string_view::npos ||
        str.find("l") != std::string_view::npos)
        return true;
    else
        return false;
}

void delDup(std::forward_list<std::string> &names) {
    std::forward_list<std::string> unique_names;

    unique_names.push_front(names.front());
    for (std::string i : names) {
        if (find(unique_names.begin(), unique_names.end(), i) == unique_names.end() && !checkForCbl(i)) {
            unique_names.push_front(i);
        }
    }
    names = unique_names;
}

void reverse(std::forward_list<std::string> &names) {
    std::forward_list<std::string> reversed_names;

    for (std::string item : names) {
        reversed_names.push_front(item);
    }
    names = reversed_names;
}

void parseAndPrint(std::forward_list<std::string> &names, std::string file) {
    delDup(names);
    reverse(names);

    std::ofstream out(file);
    for (std::string item : names) {
        if (item.size() > 10)
            out << "Long one\n";
        else if (item.size() < 4)
            out << "Short one\n";
        else
            out << item << "\n";
    }
}

