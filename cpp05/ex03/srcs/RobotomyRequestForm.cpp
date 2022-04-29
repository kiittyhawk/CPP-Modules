#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45), _target("Default")
{
    // std::cout << GREEN;
    // std::cout << "[RobotomyRequestForm] Default constructor called" << std::endl;
    // std::cout << RESET;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), _target(target)
{
    // std::cout << GREEN;
    // std::cout << "[RobotomyRequestForm] Default constructor called with target " << this->getTarget() << std::endl;
    // std::cout << RESET;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &data): Form(data), _target(data.getTarget())
{
    // std::cout << GREEN;
    // std::cout << "[RobotomyRequestForm] Copy constructor called" << std::endl;
    // std::cout << RESET;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    // std::cout << RED;
    // std::cout << "[RobotomyRequestForm] Destructor called" << std::endl;
    // std::cout << RESET;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &data)
{
    (void) data;
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::gradeCheck(executor.getGrade(), *this);
    Form::isSigned();
    if (rand() % (1 - 0 + 1))
    {
        std::cout << PURPLE;
        std::cout << "[RobotomyRequestForm] Bzzzzzzzz! " << this->getTarget() << " has been robotomized successfully 50" << '%' << " of the time" << std::endl;
        std::cout << RESET;
    }
    else
    {
        std::cout << RED;
        std::cout << "[RobotomyRequestForm] " << this->getTarget() << " robotomy failed" << std::endl;
        std::cout << RESET;
    }    
}

std::string    RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}