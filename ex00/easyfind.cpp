/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include <algorithm>
#include <stdexcept>
#include <vector>
#include <deque>
#include <list>

#include "easyfind.hpp"

template void easyfind(std::vector<int> haystack, int needle);
template void easyfind(std::deque<int> haystack, int needle);
template void easyfind(std::list<int> haystack, int needle);

template <typename T>
void easyfind(T haystack, int needle) {
    if (std::find(haystack.begin(), haystack.end(), needle) == haystack.end())
    {
        throw std::out_of_range("Needle not in haystack.");
    }
}
