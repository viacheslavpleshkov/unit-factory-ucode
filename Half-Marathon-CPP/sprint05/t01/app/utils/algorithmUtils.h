#pragma once

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

template <typename T>
bool IsInRange(const T& val, const T& from, const T& to) {
    if(from <= val && val <= to)
        return true;
    return false;
}

template <typename T>
bool IsInRange(const T& val, const std::pair<const T&, const T&>& minmax) {
    if(minmax.first <= val && val <= minmax.second)
        return true;
    return false;
}

template <typename T>
bool IsInsideRange(const T& val, const T& from, const T& to) {
    if(from < val && val < to)
        return true;
    return false;
}

template <typename T>
bool IsInsideRange(const T& val, const std::pair<const T&, const T&>& minmax) {
    if (minmax.first < val && val < minmax.second)
        return true;
    return false;
}

template <typename T, class U = T>
bool Modify(T& obj, U&& new_value) {
    if (obj == new_value)
        return false;
    else {
        obj = new_value;
        return true;
    }
}

template <class Collection, class T>
void RemoveAll(Collection& c, const T& value) {
    c = {c.begin(), (std::remove(c.begin(), c.end(), value))};
}

template <class Collection, class Pred>
void RemoveAllIf(Collection& c, Pred&& predicate) {
    c = {c.begin(), (std::remove_if(c.begin(), c.end(), predicate))};
}

template <class Collection, class T>
auto Find(Collection& c, const T& value) {
    return std::find(c.begin(), c.end(), value);
}

template <class Collection, class Pred>
auto FindIf(Collection& c, Pred&& predicate) {
    return std::find_if(c.begin(), c.end(), predicate);
}

template <class Collection, class T>
bool Contains(const Collection& c, const T& value) {
    return Find(c, value) != c.end();
}

template <class Collection, class Pred>
bool ContainsIf(const Collection& c, Pred&& predicate) {
    return FindIf(c, predicate) != c.end();
}

template <class Collection, class Pred>
int CountIf(const Collection& c, Pred&& predicate) {
    return std::count_if(c.begin(), c.end(), predicate);
}

template <class T>
const auto &Min(const T& arg) {
    return arg;
}

template <class T, class... Args>
const auto& Min(const T& arg, const Args&... args) {
    if (arg < Min(args...))
        return arg;
    else
        return Min(args...);
}

template <class T>
const auto &Max(const T& arg) {
    return arg;
}

template <class T, class... Args>
const auto& Max(const T& arg, const Args&... args) {
    if (arg > Max(args...))
        return arg;
    else
        return Max(args...);
}

template <class Collection>
auto MaxElement(const Collection& c) {
    return std::max_element(c.begin(), c.end());
}

template <class Collection>
auto MinElement(const Collection& c) {
    return std::min_element(c.begin(), c.end());
}

template <class Collection, class Comp>
auto MaxElement(const Collection& c, Comp&& comparator) {
    return std::max_element(c.begin(), c.end(), comparator);
}

template <class Collection, class Comp>
auto MinElement(const Collection& c, Comp&& comparator) {
    return std::min_element(c.begin(), c.end(), comparator);
}

template <class Collection>
void Sort(Collection& c) {
    std::sort(c.begin(), c.end());
}

template <class Collection, class Comp>
void Sort(Collection& c, Comp&& comparator) {
    std::sort(c.begin(), c.end(), comparator);
}

template <class Collection>
void Unique(Collection& c) {
    c = {c.begin(), std::unique(c.begin(), c.end())};
}

template <class Collection, class Pred>
void Unique(Collection& c, Pred&& predicate) {
    c = {c.begin(), std::unique(c.begin(), c.end(), predicate)};
}

template <class Collection, class Pred>
void ForEach(Collection& c, Pred&& predicate) {
    std::for_each(c.begin(), c.end(), predicate);
}

template <class Collection, class T>
int IndexOf(const Collection& c, const T& value) {
    int i = 0;

    for (const auto& item : c) {
        if (item == value)
            return i;
        i++;
    }
    return -1;
}

template <class Collection, class Pred>
int IndexOfIf(const Collection& c, Pred&& predicate) {
    int i = 0;

    for (auto& item : c) {
        if (predicate(item))
            return i;
        i++;
    }
    return -1;
}
