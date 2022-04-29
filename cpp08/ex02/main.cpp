#include "MutantStack.hpp"
#include <list>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));
    try
    {
        std::cout << "TEST #1" << std::endl;
        MutantStack<int> stack;

        for (size_t i = 0; i < 7; i++)
            stack.push(rand() % (100 - 1 - 1));
        
        std::cout << PURPLE << "size: " << RESET << stack.size() << std::endl;

        MutantStack<int>::iterator i = stack.begin();
        size_t k = 0;
        while (k != stack.size())
        {
            std::cout << YELLOW << "stack[" << k++ << "]: " << RESET << *i << std::endl;
            i++;
        }
        std::cout << std::endl;
        MutantStack<int>::iterator j = stack.end();
        while (k != 0)
        {
            j--;
            std::cout << YELLOW << "stack[" << --k << "]: " << RESET << *j << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "\nTest #2" << std::endl;
        MutantStack<int> stack;
        for (size_t i = 0; i < 3; i++)
            stack.push(rand() % (100 - 1 - 1));
        MutantStack<int>::iterator i = stack.begin();
        size_t k = 0;
        while (k != stack.size())
        {
            std::cout << YELLOW << "stack[" << k++ << "]: " << RESET << *i << std::endl;
            i++;
        }
        std::cout << std::endl;

        MutantStack<int> copyStack = stack;
        MutantStack<int>::iterator j = copyStack.begin();
        k = 0;
        while (k != copyStack.size())
        {
            std::cout << YELLOW << "copyStack[" << k++ << "]: " << RESET << *j << std::endl;
            j++;
        }
        std::cout << std::endl;

        MutantStack<int> assigStack;
        for (int i = 0; i < 3; i++)
            assigStack.push(i);
        assigStack = stack;
        MutantStack<int>::iterator q = copyStack.begin();
        k = 0;
        while (k != copyStack.size())
        {
            std::cout << YELLOW << "assigStack[" << k++ << "]: " << RESET << *q << std::endl;
            q++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "\nSubject's Test" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << PURPLE << "top: " << RESET << mstack.top() << std::endl;
        mstack.pop();
        std::cout << PURPLE << "size: " << RESET << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        size_t k = 0;
        while (it != ite)
        {
            std::cout << YELLOW << "mstack[" << k++ << "]: " << RESET << *it << std::endl;
            ++it;
        }

        std::list<int> list;
        list.push_back(5);
        list.push_back(17);
        std::cout << PURPLE << "top: " << RESET << list.back() << std::endl;
        list.pop_back();
        std::cout << PURPLE << "size: " << RESET << list.size() << std::endl;
        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        list.push_back(0);
        std::list<int>::iterator itl = list.begin();
        std::list<int>::iterator itel = list.end();
        ++itl;
        --itl;
        k = 0;
        while (itl != itel)
        {
            std::cout << YELLOW << "mstack[" << k++ << "]: " << RESET << *itl << std::endl;
            ++itl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}