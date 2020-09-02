#pragma once
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>

template <class Container>
void outputContainer(const Container &c) {
    std::copy(c.begin(), c.end(),
        std::ostream_iterator<typename Container::value_type>{std::cout, "\n"});
}
