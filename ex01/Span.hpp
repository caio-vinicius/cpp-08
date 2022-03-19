/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span {
 public:
    Span(void);
    ~Span(void);
    Span &operator=(Span const &rhs);
    Span(Span const &src);

    Span(unsigned int n);
    void addNumber(unsigned int n);
    std::vector<int> getNumbers(void);
    std::vector<int>::iterator shortestSpan(void);
    std::vector<int>::iterator longestSpan(void);
    void addNumberRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
 private:
    const unsigned int max_numbers;
    std::vector<int> numbers;
};

#endif
