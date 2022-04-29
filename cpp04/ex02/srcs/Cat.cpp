#include "../includes/Cat.hpp"

Cat::Cat(void) : AAnimal()
{
    this->_type = "Cat";
    this->_brain = new Brain();
    this->_brain->addIdea("I can eat");
    this->_brain->addIdea("I can run around the apartment");
    this->_brain->addIdea("I can speak meow");
    std::cout << GREEN;
    std::cout << "[Cat] Default constructor called" << std::endl;
    std::cout << RESET;
}

Cat::Cat(const Cat &data) : AAnimal(data)
{
    this->_brain = data.getBrain();
    std::cout << GREEN;
    std::cout << "[Cat] Copy constructor called" << std::endl;
    std::cout << RESET;
}

Cat &Cat::operator=(const Cat &data)
{
    if (this != &data)
    {
        this->_type = data.getType();
        *(this->_brain) = *(data.getBrain());
        std::cout << GREEN;
        std::cout << "[Cat] Assignement operator called" << std::endl;
        std::cout << RESET;
    }
    return (*this);
}

Cat::~Cat(void)
{
    delete this->_brain;
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

Brain   *Cat::getBrain(void) const
{
    return (this->_brain);
}

void    Cat::printIdeas(void) const
{
    this->_brain->printIdeas();
}