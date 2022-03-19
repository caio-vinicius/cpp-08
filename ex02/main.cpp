/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>
#include <stack>
#include <vector>
#include <list>

#include "MutantStack.hpp"

int main(void) {
    std::cout << "TEST 1 DEQUE ------------" << std::endl;
    {
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        std::cout << mstack.size() << std::endl;
    }
    std::cout << "TEST 1 REAL DEQUE ------------" << std::endl;
    {
        std::stack<int> rstack;

        rstack.push(5);
        rstack.push(17);
        std::cout << rstack.top() << std::endl;
        rstack.pop();
        std::cout << rstack.size() << std::endl;
        rstack.push(3);
        rstack.push(5);
        rstack.push(737);
        std::cout << rstack.size() << std::endl;
    }
    std::cout << "TEST 2 DEQUE ------------" << std::endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    std::cout << "TEST 3 DEQUE ------------" << std::endl;
    {
        std::deque<int> mydeque(3,100);
        std::stack<int> second(mydeque);
        MutantStack<int> secondcopy(mydeque);

        MutantStack<int>::iterator it = secondcopy.begin();
        MutantStack<int>::iterator ite = secondcopy.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    std::cout << "TEST 4 VECTOR ------------" << std::endl;
    {
        MutantStack<int, std::vector<int> > mstack;

        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        std::cout << mstack.size() << std::endl;
    }
    std::cout << "TEST 4 REAL VECTOR ------------" << std::endl;
    {
        std::stack<int, std::vector<int> > rstack;

        rstack.push(5);
        rstack.push(17);
        std::cout << rstack.top() << std::endl;
        rstack.pop();
        std::cout << rstack.size() << std::endl;
        rstack.push(3);
        rstack.push(5);
        rstack.push(737);
        std::cout << rstack.size() << std::endl;
    }
    std::cout << "TEST 5 VECTOR ------------" << std::endl;
    {
        MutantStack<int, std::vector<int> > mstack;
        mstack.push(5);
        mstack.push(17);
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
        MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    std::cout << "TEST 6 VECTOR ------------" << std::endl;
    {
        std::vector<int> myvector(3,100);
        //std::stack<int> second(myvector);
        MutantStack<int, std::vector<int> > secondcopy(myvector);

        MutantStack<int, std::vector<int> >::iterator it = secondcopy.begin();
        MutantStack<int, std::vector<int> >::iterator ite = secondcopy.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    std::cout << "TEST 7 LIST ------------" << std::endl;
    {
        MutantStack<int, std::list<int> > mstack;

        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        std::cout << mstack.size() << std::endl;
    }
    std::cout << "TEST 7 REAL LIST ------------" << std::endl;
    {
        std::stack<int, std::list<int> > rstack;

        rstack.push(5);
        rstack.push(17);
        std::cout << rstack.top() << std::endl;
        rstack.pop();
        std::cout << rstack.size() << std::endl;
        rstack.push(3);
        rstack.push(5);
        rstack.push(737);
        std::cout << rstack.size() << std::endl;
    }
    std::cout << "TEST 8 LIST ------------" << std::endl;
    {
        MutantStack<int, std::list<int> > mstack;
        mstack.push(5);
        mstack.push(17);
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int, std::list<int> >::iterator it = mstack.begin();
        MutantStack<int, std::list<int> >::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    std::cout << "TEST 9 LIST ------------" << std::endl;
    {
        std::list<int> mylist(3,100);
        //std::stack<int> second(mylist);
        MutantStack<int, std::list<int> > secondcopy(mylist);

        MutantStack<int, std::list<int> >::iterator it = secondcopy.begin();
        MutantStack<int, std::list<int> >::iterator ite = secondcopy.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    return (0);
}
