/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <deque>
#include <vector>
#include <list>

#include "MutantStack.hpp"

//template <typename T, typename Container>
//MutantStack<T, Container>::MutantStack() {}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(MutantStack const &rhs) {
    (void)rhs;
    return (*this);
}

//template <typename T, typename Container>
//MutantStack<T, Container>::MutantStack(MutantStack const &src) {
//    *this = src;
//}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(Container const &ctnr) {
    MutantStack::data = ctnr;
}

template <typename T, typename Container>
bool MutantStack<T, Container>::empty() const {
    return (false);
}

template <typename T, typename Container>
size_t MutantStack<T, Container>::size() const {
    return (MutantStack::data.size());
}

template <typename T, typename Container>
T& MutantStack<T, Container>::top() {
    return (MutantStack::data.back());
}

template <typename T, typename Container>
const T& MutantStack<T, Container>::top() const {
    return (MutantStack::data.back());
}

template <typename T, typename Container>
void MutantStack<T, Container>::push(const T& val) {
    MutantStack::data.push_back(val);
}

template <typename T, typename Container>
void MutantStack<T, Container>::pop() {
    MutantStack::data.pop_back();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin(void) {
    return (MutantStack::data.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end(void) {
    return (MutantStack::data.end());
}

template class MutantStack<int, std::deque<int> >;
template class MutantStack<int, std::vector<int> >;
template class MutantStack<int, std::list<int> >;
