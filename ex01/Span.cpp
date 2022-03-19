/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <algorithm>
#include <stdexcept>

#include "Span.hpp"

Span::Span(): max_numbers(0) {}

Span::~Span() {}

Span &Span::operator=(Span const &rhs) {
    (void)rhs;
    return (*this);
}

Span::Span(Span const &src): max_numbers(src.max_numbers) {
    *this = src;
}

Span::Span(unsigned int n): max_numbers(n) {}

void Span::addNumber(unsigned int n) {
    if (Span::numbers.size() >= Span::max_numbers)
        throw std::length_error("Too much numbers stored.");
    Span::numbers.insert(std::upper_bound(Span::numbers.begin(), Span::numbers.end(), n), n);
}

std::vector<int> Span::getNumbers(void) {
    return (Span::numbers);
}

std::vector<int>::iterator Span::shortestSpan(void) {
    if (Span::numbers.size() <= 1)
        throw std::length_error("Length of numbers stored are to low.");
    return (Span::numbers.begin());
}

std::vector<int>::iterator Span::longestSpan(void) {
    if (Span::numbers.size() <= 1)
        throw std::length_error("Length of numbers stored are to low.");
    return (Span::numbers.end() - 1);
}

void Span::addNumberRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    while (begin != end) {
        Span::addNumber(*begin);
        std::advance(begin, 1);
    }
}
