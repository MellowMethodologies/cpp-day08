#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v;

    for(int i = 0; i < 50 ; i++)
        v.push_back(i);
    std::cout << "Container: "<< v[1] << std::endl;
    try{
        easyfind(v, 1);
        easyfind(v, 100);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}