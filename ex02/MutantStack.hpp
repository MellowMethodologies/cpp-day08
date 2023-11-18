#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <iostream>
#include <deque>
#include <stack>
#include <list>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack< T, Container >{
public:
    MutantStack(){}
    MutantStack(const MutantStack& other){*this = other;}
    ~MutantStack(){}
    MutantStack& operator=(const MutantStack& other){ return *other;}
    typedef typename Container::iterator iterator;
    iterator begin() { return std::stack<T, Container>::c.begin(); }
    iterator end() { return std::stack<T, Container>::c.end(); }
};

#endif // MutantStack_HPP
