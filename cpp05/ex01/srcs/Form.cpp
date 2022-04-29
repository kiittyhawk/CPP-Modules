#include "../includes/Form.hpp"

Form::Form(void): _name("Default"), _signed(false), _gradeSign(150), _gradeExec(150)
{
    std::cout << GREEN;
    std::cout << "[Form] " << this->_name << ": constructor called" << std::endl;
    std::cout << RESET;
}

Form::Form(std::string const &name, size_t const &gradeSign, size_t const &gradeExec): _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    std::cout << GREEN;
    std::cout << "[Form] " << this->_name << ": constructor called" << std::endl;
    std::cout << RESET;
    if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
    else if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooHighException();
}

Form::Form(const Form &data): _name(data.getName()), _signed(data.getSigned()), _gradeSign(data.getGradeSign()), _gradeExec(data.getGradeExec())
{
    std::cout << GREEN;
    std::cout << "[Form] " << this->_name << ": copy constructor called" << std::endl;
    std::cout << RESET;
    if (data.getGradeSign() > 150 || data.getGradeExec() > 150)
        throw GradeTooLowException();
    else if (data.getGradeSign() < 1 || data.getGradeExec() < 1)
        throw GradeTooHighException();
}

Form::~Form(void)
{
    std::cout << RED;
    std::cout << "[Form] " << this->_name << ": destructor called" << std::endl;
    std::cout << RESET;
}

Form    &Form::operator=(Form const &data)
{
    if (this != &data)
        this->_signed = data._signed;
    return (*this);
}

const std::string   &Form::getName(void) const
{
    return (this->_name);
}

size_t const    &Form::getGradeSign(void) const
{
    return (this->_gradeSign);
}

size_t const    &Form::getGradeExec(void) const
{
    return (this->_gradeExec);
}

bool const  &Form::getSigned(void) const
{
    return (this->_signed);
}

const char  *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too HIGH!");
}

const char  *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too LOW!");
}

void    Form::beSigned(const Bureaucrat &burt)
{
    if (this->_signed)
        return ;
    else if (this->_gradeSign < burt.getGrade())
        throw GradeTooLowException();
    else if (this->_gradeExec < burt.getGrade())
        throw GradeTooLowException();
    else
        this->_signed = true;
}

std::ostream    &operator<<(std::ostream &ostream, Form const &data)
{
    ostream << YELLOW << "Name: " << data.getName() << "\n" \
            << "Form: " << (data.getSigned() ? "signed" : "nor signed") << "\n"
            << "Grade to sign: " << data.getGradeSign() << "\n"
            << "Grade to execute: " << data.getGradeExec() << "\n" << RESET;
    return (ostream);
}
