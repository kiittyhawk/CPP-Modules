#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Animal")
{
    std::cout << GREEN;
    std::cout << "[Animal] Default constructor called" << std::endl;
    std::cout << RESET;
}

AAnimal::AAnimal(AAnimal const &data) : _type(data.getType())
{
    std::cout << GREEN;
    std::cout << "[Animal] Copy constructor called" << std::endl;
    std::cout << RESET;
}

AAnimal  &AAnimal::operator=(const AAnimal &data)
{
    std::cout << GREEN;
    std::cout << "[Animal] Assignement operator called" << std::endl;
    std::cout << RESET;
    if (this != &data)
        this->_type = data.getType();
    return (*this);
}

AAnimal::~AAnimal(void)
{
    std::cout << RED;
    std::cout << "[Animal] Destructor called" << std::endl;
    std::cout << RESET;
}

std::string AAnimal::getType(void) const
{
    return (this->_type);
}
