#include "./includes/A.hpp"
#include "./includes/B.hpp"
#include "./includes/C.hpp"

int main(void)
{
    Base    *base = generate();

    identify(base);
    identify(*base);
    
    delete base;
}