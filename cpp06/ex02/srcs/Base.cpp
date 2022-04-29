#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(void) {}
Base::~Base(void) {}

Base    *generate(void)
{
    srand(time(NULL));
    switch (rand() % (2-0+1))
    {
        case 0:
            return (new A());
            break;
        case 1:
            return (new B());
            break;
        case 2:
            return (new C());
            break;
    }
    return (NULL);
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Type A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type C" << std::endl;
}

void    identify(Base &p)
{
    try
    {
        A val;
        val = dynamic_cast<A&>(p);
        std::cout << "Type A" << std::endl;
    }
    catch(const std::exception& e) {}
    try
    {
        B val;
        val = dynamic_cast<B&>(p);
        std::cout << "Type B" << std::endl;
    }
    catch(const std::exception& e) {}
    try
    {
        C val;
        val = dynamic_cast<C&>(p);
        std::cout << "Type C" << std::endl;
    }
    catch(const std::exception& e) {}  
}