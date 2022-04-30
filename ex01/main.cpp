/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include "Span.hpp"

#include <iostream>
#include <cstdlib>

void spanSubject() {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void span() {
    std::cout << "TEST 1 =========" << std::endl;
    {
        Span span(30);

        span.addNumber(5);
        span.addNumber(10);
        span.addNumber(8);
        span.addNumber(100);
        span.addNumber(52);
        span.addNumber(42);

        int i;

        i = span.shortestSpan();
        std::cout << "shortest span: " << i << std::endl;

        i = span.longestSpan();
        std::cout << "longest span: " << i << std::endl;
    }
    std::cout << "TEST 2 =========" << std::endl;
    {
        Span span(30);

        std::vector<int> v;

        srand(time(NULL));
        for (unsigned int i = 0; i < 10; i++) {
            v.push_back(rand() % 100);
        }
        std::vector<int>::iterator i;
        std::vector<int>::iterator iend;

        i = v.begin();
        iend = v.end();

        while (i != iend) {
            std::cout << *i << " ";
            std::advance(i, 1);
        }
        std::cout << std::endl;

        span.addNumberRange(v.begin(), (v.end() - 2));

        std::vector<int> v2;

        v2 = span.getNumbers();
        i = v2.begin();
        iend = v2.end();

        while (i != iend) {
            std::cout << *i << " ";
            std::advance(i, 1);
        }
        std::cout << std::endl;

        int j;
        j = span.shortestSpan();
        std::cout << "shortest span: " << j << std::endl;

        j = span.longestSpan();
        std::cout << "longest span: " << j << std::endl;
    }
    std::cout << "TEST 3 =========" << std::endl;
    {
        Span span(3);

        span.addNumber(5);
        span.addNumber(10);
        span.addNumber(8);
        try {
            span.addNumber(11);
            std::cout << "KO";
        } catch (const std::length_error &e) {
            std::cerr << "OK: " << e.what() << std::endl;
        }
    }
    std::cout << "TEST 4 =========" << std::endl;
    {
        Span span(3);

        try {
            span.shortestSpan();
            std::cout << "KO";
        } catch (const std::length_error &e) {
            std::cerr << "OK: " << e.what() << std::endl;
        }
    }
}

int main(void) {
    span();
    //spanSubject();
    return (0);
}
