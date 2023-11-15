#include "Span.hpp"

Span::Span(unsigned int N) : N(N), shSpan(INT_MAX) {
}

Span::Span(const Span& other) {
    *this = other;
}

Span::~Span() {
}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        N = other.N;
    }
    return *this;
}

void Span::addNumber(int number){
    if (N == V.size())
       throw std::out_of_range("Not enough space ");
    V.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
    if (N < (std::distance(begin, end) + V.size()))
        throw std::out_of_range("Not enough space ");
    V.insert(V.end(), begin, end);
}


unsigned int Span::longestSpan(){
    if (V.size() == 0 || V.size() == 1)
        throw std::out_of_range("Not enough elements in the container");
    return ( *std::max_element( V.begin(), V.end() ) - *std::min_element( V.begin(), V.end() ));
}

unsigned int Span::shortestSpan()
{
    if (V.size() == 0 || V.size() == 1)
        throw std::out_of_range("Not enough elements in the container");
    std::sort(V.begin(),V.end());
    unsigned int tmp = INT_MAX;
    for (size_t i = 0; i < V.size(); i++)
    {
        if (i == V.size())
            tmp = V[i] - V[i - 1];
        else
            tmp = V[i + 1] - V[i];
        if (tmp < shSpan)
            shSpan = tmp;
        if (shSpan == 0)
            return (0);
    }
    return (shSpan);
}

