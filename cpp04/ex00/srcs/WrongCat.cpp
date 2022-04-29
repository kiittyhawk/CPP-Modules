#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << GREEN;
    std::cout << "[WrongCat] Default constructor called" << std::endl;
    std::cout << RESET;
}

WrongCat::WrongCat(const WrongCat &data) : WrongAnimal(data)
{
    std::cout << GREEN;
    std::cout << "[WrongCat] Copy constructor called" << std::endl;
    std::cout << RESET;
}

WrongCat::~WrongCat(void)
{
    std::cout << RED;
    std::cout << "[WrongCat] Destructor called" << std::endl;
    std::cout << RESET;
}

WrongCat    &WrongCat::operator=(const WrongCat &data)
{
    if (this != &data)
    {
        WrongAnimal::operator=(data);
        std::cout << GREEN;
        std::cout << "[WrongCat] Assignement operator called" << std::endl;
        std::cout << RESET;
    }
    return (*this);
}

std::string WrongCat::getType(void) const
{
    return (this->_type);
}

void    WrongCat::makeSound(void) const
{
    std::cout << YELLOW;
    std::cout << this->_type << " says: Meeeooowwww~!" << std::endl;
    std::cout << std::endl;
}