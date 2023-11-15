#ifndef EAsy_find
#define EAsy_find

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class Notfound: public std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return ("Not found");
        }
        
};

// template <class T>
// std::ostream &operator<<(std::ostream &os, T element)
// {
//     os << element;
//     return (os);
// }

template <typename T>
void easyfind(T container, int value){ std::find(container.begin(), container.end(), value) == container.end()? throw Notfound() : std::cout << "Element found in the container!" << std::endl; }

#endif