#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialForm", 25, 5), _target("Default")
{
    // std::cout << GREEN;
    // std::cout << "[PresidentialPardonForm] Default constructor called" << std::endl;
    // std::cout << RESET; 
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialForm", 25, 5), _target(target)
{
    // std::cout << GREEN;
    // std::cout << "[PresidentialPardonForm] Default constructor called with target " << this->getTarget() << std::endl;
    // std::cout << RESET; 
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &data): Form(data), _target(data.getTarget())
{
    // std::cout << GREEN;
    // std::cout << "[PresidentialPardonForm] Copy constructor called" << std::endl;
    // std::cout << RESET;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    // std::cout << RED;
    // std::cout << "[PresidentialPardonForm] Destructor called" << std::endl;
    // std::cout << RESET;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(const PresidentialPardonForm &data)
{
    (void) data;
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::gradeCheck(executor.getGrade(), *this);
    Form::isSigned();
    std::cout << PURPLE;
    std::cout << "[PresidentialPardonForm] " << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
    std::cout << RESET;
}

const std::string   &PresidentialPardonForm::getTarget(void) const
{
    return (this->_target);
}