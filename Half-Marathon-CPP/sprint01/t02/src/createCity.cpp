#include "visitAll.h"

std::string trim(const std::string &s) {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && isspace(*it))
        it++;

    std::string::const_reverse_iterator rit = s.rbegin();
    while (rit.base() != it && isspace(*rit))
        rit++;

    return std::string(it, rit.base());
}

bool isNumber(std::string str) {
    if (str.size() == 0)
        return true;
    for (int i = 0; i < str.size(); i++)
        if (std::isdigit(str[i]) == false)
            return true;
    return false;
}

bool isString(std::string str) {
    if (str.size() == 0)
        return true;
    for (int i = 0; i < str.size(); i++)
        if (std::isalpha(str[i]) == false)
            return true;
    return false;
}

City *createCity(char *str, int counter) {
    std::string temp;
    std::vector<std::string> pars;
    std::stringstream ss;
    City *city = new City;
    ss << str;

    while (std::getline(ss, temp, ',')) {
        temp = trim(temp);
        pars.push_back(temp);
    }
    try {
        if (isString(pars[0]))
            throw false;
        if (isNumber(pars[1]))
            throw false;
        if (isNumber(pars[2]))
            throw false;
    }
    catch (...) {
        std::cout << "Argument " << str << " is not valid" << std::endl;
        exit(1);
    }
    city->name = pars[0];
    city->stamina = pars[1];
    city->distance = pars[2];
    city->counter = counter;
    return city;
}