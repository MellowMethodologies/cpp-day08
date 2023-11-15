#include "Span.hpp"

// int main()
// {
//     try{
//     span s(20000);

//     for(int i = 0; i < 20000 ; i++)
//         s.addNumber(i);
//     std::cout << "Container: "<< s.shortestSpan() << std::endl;
//     std::cout << "Container: "<< s.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }

int main()
{
    {    
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    // return 0;
    {
        Span sp = Span(5);
        std::vector<int> v;
        v.push_back(3);
        v.push_back(17);
        v.push_back(6);
        v.push_back(9);
        v.push_back(11);
        sp.addNumber(v.begin(), v.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        return 0;
    }
}