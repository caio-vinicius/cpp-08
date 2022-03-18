/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <stdexcept>
#include <iostream>

#include "easyfind.hpp"

int main(void) {
    std::cout << ">>>>>>>>>> SEQUENCE CONTAINERS" << std::endl;
    std::cout << "=========> CONTAINER VECTOR" << std::endl;
    std::cout << "1 TEST -------" << std::endl;;
    {
        std::vector<int> v;

        for (unsigned int i = 0; i < 5; i++)
            v.push_back(i);

        try {
            easyfind(v, 3);
            std::cout << "> OK" << std::endl;
        } catch (const std::out_of_range &e) {
            std::cerr << "> KO: ";
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << "2 TEST -------" << std::endl;
    {
        std::vector<int> v;

        for (unsigned int i = 0; i < 5; i++)
            v.push_back(i);

        try {
            easyfind(v, 10);
            std::cout << "> KO" << std::endl;
        } catch (const std::out_of_range &e) {
            std::cerr << "> OK: ";
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << "=========> CONTAINER DEQUE" << std::endl;
    std::cout << "1 TEST -------" << std::endl;;
    {
        std::deque<int> v;

        for (unsigned int i = 0; i < 5; i++)
            v.push_back(i);

        try {
            easyfind(v, 3);
            std::cout << "> OK" << std::endl;
        } catch (const std::out_of_range &e) {
            std::cerr << "> KO: ";
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << "2 TEST -------" << std::endl;
    {
        std::deque<int> v;

        for (unsigned int i = 0; i < 5; i++)
            v.push_back(i);

        try {
            easyfind(v, 10);
            std::cout << "> KO" << std::endl;
        } catch (const std::out_of_range &e) {
            std::cerr << "> OK: ";
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << "=========> CONTAINER LIST" << std::endl;
    std::cout << "1 TEST -------" << std::endl;;
    {
        std::list<int> v;

        for (unsigned int i = 0; i < 5; i++)
            v.push_back(i);

        try {
            easyfind(v, 3);
            std::cout << "> OK" << std::endl;
        } catch (const std::out_of_range &e) {
            std::cerr << "> KO: ";
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << "2 TEST -------" << std::endl;
    {
        std::list<int> v;

        for (unsigned int i = 0; i < 5; i++)
            v.push_back(i);

        try {
            easyfind(v, 10);
            std::cout << "> KO" << std::endl;
        } catch (const std::out_of_range &e) {
            std::cerr << "> OK: ";
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}
