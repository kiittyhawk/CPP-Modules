#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal()
{
    this->_type = "Dog";
    std::cout << GREEN;
    std::cout << "[Dog] Default constructor called" << std::endl;
    std::cout << RESET;
}

Dog::~Dog(void)
{
    std::cout << RED;
    std::cout << "[Dog] Destructor called" << std::endl;
    std::cout << RESET;
}

Dog::Dog(const Dog &data) : Animal(data)
{
    std::cout << GREEN;
    std::cout << "[Dog] Copy constructor called" << std::endl;
    std::cout << RESET;
}

Dog &Dog::operator=(Dog const &data)
{
    std::cout << GREEN;
    std::cout << "[Dog] Assignement operator called" << std::endl;
    std::cout << RESET;
    if (this != &data)
        Animal::operator=(data);
    return (*this);
}

std::string Dog::getType(void) const
{
    return (this->_type);
}

void    Dog::makeSound(void) const
{
    std::cout << YELLOW;
    std::cout << this->_type << " says: Woooof!" << std::endl;
    std::cout << RESET;
}