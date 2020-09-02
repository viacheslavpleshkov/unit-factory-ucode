#pragma once
#include <algorithm>
#include <vector>
#include <string>

template <class RandomAccessIterator>
RandomAccessIterator sortValues(RandomAccessIterator begin, RandomAccessIterator end) {
    bool swapped = true;
    while (begin != end-- && swapped) {
        swapped = false;
        for (auto i = begin; i != end; ++i) {
            if (*(i + 1) < *i) {
                std::iter_swap(i, i + 1);
                swapped = true;
            }
        }
    }
    return begin;
}
