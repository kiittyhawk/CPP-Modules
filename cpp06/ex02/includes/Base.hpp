#ifndef BASE_HPP
#define BASE_HPP

#include "./Color.hpp"
#include <stdlib.h>

class Base
{
    public:
        Base(void);
        virtual ~Base(void);
};

Base    *generate(void);
void    identify(Base *p);
void    identify(Base &p);

#endif