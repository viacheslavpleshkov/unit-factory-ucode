#pragma once

template <class T, class... Ts>
T sumOfArguments(const T &t, const Ts&... args) {
    return t + (args + ...);
}
