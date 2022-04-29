#include "../includes/Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
    std::cout << GREEN;
    std::cout << "[Animal] Default constructor called" << std::endl;
    std::cout << RESET;
}

Animal::Animal(Animal const &data) : _type(data.getType())
{
    std::cout << GREEN;
    std::cout << "[Animal] Copy constructor called" << std::endl;
    std::cout << RESET;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << GREEN;
    std::cout << "[Animal] Default constructor called" << std::endl;
    std::cout << RESET;
}

Animal  &Animal::operator=(const Animal &data)
{
    std::cout << GREEN;
    std::cout << "[Animal] Assignement operator called" << std::endl;
    std::cout << RESET;
    if (this != &data)
        this->_type = data.getType();
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << RED;
    std::cout << "[Animal] Destructor called" << std::endl;
    std::cout << RESET;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void    Animal::makeSound(void) const
{
    std::cout << YELLOW;
    std::cout << this->_type << " says: I'm Animal" << std::endl;
    std::cout << RESET;
}
