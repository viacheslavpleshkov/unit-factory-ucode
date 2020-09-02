#pragma once
#include <iostream>

template <class Container>
void outputAny(const Container &c) {
    for (const auto &i : c) {
        std::cout << i << '\n';
    }
}
