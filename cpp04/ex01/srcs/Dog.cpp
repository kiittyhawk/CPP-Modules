#include "../includes/Dog.hpp"

Dog::Dog(void)
{
    this->_brain = new Brain();
    this->_brain->addIdea("I can wag my tail");
    this->_brain->addIdea("I can execute commands");
    this->_brain->addIdea("I can eat");
    this->_type = "Dog";
    std::cout << GREEN;
    std::cout << "[Dog] Default constructor called" << std::endl;
    std::cout << RESET;
}

Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << RED;
    std::cout << "[Dog] Destructor called" << std::endl;
    std::cout << RESET;
}

Dog::Dog(const Dog &data) : Animal(data)
{
    this->_brain = data.getBrain();
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
    {
        this->_type = data.getType();
        *(this->_brain) = *(data.getBrain());
    }
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

Brain   *Dog::getBrain(void) const
{
    return (this->_brain);
}

void    Dog::printIdeas(void) const
{
    this->_brain->printIdeas();
}
