#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal()
{
    this->_type = "Cat";
    std::cout << GREEN;
    std::cout << "[Cat] Default constructor called" << std::endl;
    std::cout << RESET;
}

Cat::Cat(const Cat &data) : Animal(data)
{
    std::cout << GREEN;
    std::cout << "[Cat] Copy constructor called" << std::endl;
    std::cout << RESET;
}

Cat &Cat::operator=(const Cat &data)
{
    if (this != &data)
    {
        this->_type = data.getType();
        std::cout << GREEN;
        std::cout << "[Cat] Assignement operator called" << std::endl;
        std::cout << RESET;
    }
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << RED;
    std::cout << "[Cat] Destructor called" << std::endl;
    std::cout << RESET;
}

std::string Cat::getType(void) const
{
    return (this->_type);
}

void    Cat::makeSound(void) const
{
    std::cout << YELLOW;
    std::cout << this->_type << " says: Meeeooowwww~!" << std::endl;
    std::cout << RESET;
}