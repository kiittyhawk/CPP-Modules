#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Default"), _grade(150)
{
    std::cout << GREEN;
    std::cout << "[Bureaucrat] " << this->_name << ": constructor called" << std::endl;
    std::cout << RESET;
}

Bureaucrat::Bureaucrat(std::string const &name): _name(name), _grade(150)
{
    std::cout << GREEN;
    std::cout << "[Bureaucrat] " << this->_name << ": constructor called" << std::endl;
    std::cout << RESET;
}

Bureaucrat::Bureaucrat(size_t const &grade): _name("Default")
{
    std::cout << GREEN;
    std::cout << "[Bureaucrat] " << this->_name << ": constructor called" << std::endl;
    std::cout << RESET;
    if (grade > 1)
        throw GradeTooLowException();
    else if (grade > 150)
        throw GradeTooHighException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(std::string const &name, size_t const &grade): _name(name)
{
    std::cout << GREEN;
    std::cout << "[Bureaucrat] " << this->_name << ": constructor called" << std::endl;
    std::cout << RESET;
    if (grade < 1)
        throw GradeTooLowException();
    else if (grade > 150)
        throw GradeTooHighException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &data): _name(data._name)
{
    std::cout << GREEN;
    std::cout << "[Bureaucrat] " << this->_name << ": copy constructor called" << std::endl;
    std::cout << RESET;
    if (data._grade < 1)
        throw GradeTooLowException();
    else if (data._grade > 150)
        throw GradeTooHighException();
    else
        this->_grade = data._grade;
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &data)
{
    std::cout << GREEN;
    std::cout << "[Bureaucrat] Assignement operator called" << std::endl;
    std::cout << RESET;
    if (data._grade < 1)
        throw GradeTooLowException();
    else if (data._grade > 150)
        throw GradeTooHighException();
    else if (this != &data)
    {
        this->_grade = data._grade;
        this->_name = data._name;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << RED;
    std::cout << "[Bureaucrat] " << this->_name << ": destructor called" << std::endl;
    std::cout << RESET;
}

const std::string &Bureaucrat::getName(void) const
{
    return (this->_name);
}

size_t const &Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

// Bureaucrat  &Bureaucrat::operator++(void)
// {
//     if (this->_grade - 1 < 1)
//         throw GradeTooHighException();
//     else
//     {
//         this->_grade--;
//         return(*this);
    }
}

Bureaucrat  &Bureaucrat::operator--(void)
{
    if (this->_grade + 1 > 150)
        throw GradeTooLowException();
    else
    {
        this->_grade++;
        return(*this);
    }
}

Bureaucrat  Bureaucrat::operator++(int)
{
    if (this->_grade - 1 < 1)
        throw GradeTooHighException();
    else
    {
        Bureaucrat  tmp(*this);
        operator++();
        return (tmp);
    }
}

Bureaucrat  Bureaucrat::operator--(int)
{
    if (this->_grade + 1 > 150)
        throw GradeTooLowException();
    else
    {
        Bureaucrat  tmp(*this);
        operator--();
        return (tmp);
    }
}

void    Bureaucrat::incrementGrade(void)
{
    if (this->_grade - 1 < 1)
        throw GradeTooHighException();
    else
        this->_grade--;
}

void    Bureaucrat::decrementGrade(void)
{
    if (this->_grade + 1 > 150)
        throw GradeTooLowException();
    else
        this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too HIGH!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too LOW!");
}

std::ostream    &operator<<(std::ostream &ostream, Bureaucrat const &data)
{
    ostream << PURPLE << data.getName() << " bureaucrat grade " << data.getGrade() << "." << std::endl << RESET;
    return (ostream);
}

void    Bureaucrat::signForm(Form &form) const
{
    try
    {
        std::cout << BLUE;
        form.beSigned(*this);
        std::cout << "[Bureaucrat] " << this->_name << " signed " << form.getName() << std::endl;
        std::cout << RESET;
    }
    catch(const std::exception& e)
    {
        std::cout << RED;
        std::cerr << "[Bureaucrat] " << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << '\n';
        std::cout << RESET;
    }
    
}
