#pragma once
#include <algorithm>

template <class Container>
void squareValue(Container &cont) {
    std::transform(cont.begin(), cont.end(), cont.begin(), [](auto &i) {
        return i * i;
    });
}
