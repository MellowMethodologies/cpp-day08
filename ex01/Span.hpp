#ifndef Span_HPP
#define Span_HPP

#include <iostream>
#include <vector> 
#include <exception>
#include <algorithm>

class Span {
    private:
        std::vector<int> V;
        unsigned int N;
        unsigned int shSpan;
        Span();
    public:
        Span(unsigned int number);
        Span(const Span& other);
        ~Span();
        Span& operator=(const Span& other);
        void addNumber(int number);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif // Span_HPP
