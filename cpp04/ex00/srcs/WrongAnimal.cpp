#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
    std::cout << GREEN;
    std::cout << "[WrongAnimal] Default constructor called" << std::endl;
    std::cout << RESET;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << GREEN;
    std::cout << "[WrongAnimal] Default constructor called" << std::endl;
    std::cout << RESET;
}

WrongAnimal::WrongAnimal(const WrongAnimal &data)
{
    this->_type = data._type;
    std::cout << GREEN;
    std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
    std::cout << RESET;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << RED;
    std::cout << "[WrongAnimal] Destructor called" << std::endl;
    std::cout << RESET;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &data)
{
    if (this != &data)
    {
        this->_type = data._type;
        std::cout << GREEN;
        std::cout << "[WrongAnimal] Assignement operator called" << std::endl;
        std::cout << RESET;
    }
    return (*this);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << YELLOW;
    std::cout << this->_type << " says: I'm wrong animal!" << std::endl;
    std::cout << RESET;
}