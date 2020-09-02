#pragma once

#include <fstream>
#include <iterator>
#include <numeric>
#include <string>

template<class T>
T sumFileData(const std::string &path) {
    std::ifstream file(path);
    return std::accumulate(std::istream_iterator<T>(file), {}, T{0});
}
