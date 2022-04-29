#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
    std::list<int> list;
    std::vector<int> vec;

    for (int i = 0; i < 3; i++)
        list.push_back((i + 1) * 2);
    for (int i = 0; i < 3; i++)
        vec.push_back(i + 1);

    std::cout << "TEST #1" << std::endl;
    try
    {
        std::list<int>::iterator i = easyfind(list, 4);
        std::cout << *i << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\nTEST #2" << std::endl;
    try
    {
        std::vector<int>::iterator i = easyfind(vec, 3);
        std::cout << *i << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\nTEST #3" << std::endl;
    try
    {
        std::vector<int>::iterator i = easyfind(vec, 10);
        std::cout << *i << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}