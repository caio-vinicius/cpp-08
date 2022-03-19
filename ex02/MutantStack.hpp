/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>

typedef unsigned long int size_t;

template <typename T, typename Container = std::deque<T> >
class MutantStack {
 public:
    //MutantStack(void);
    ~MutantStack(void);
    MutantStack &operator=(MutantStack const &rhs);
    //MutantStack(MutantStack const &src);

    explicit MutantStack(Container const &ctnr = Container());
    bool empty() const;
    size_t size() const;
    T& top();
    const T& top() const;
    void push(const T& val);
    void pop();

    // iterator
    typedef typename Container::iterator iterator;
    iterator begin(void);
    iterator end(void);
 private:
    size_t size_type;
    Container data;
};

#endif
