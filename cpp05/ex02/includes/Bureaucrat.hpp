#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "./Color.hpp"
#include "./Form.hpp"

class Form;

class Bureaucrat
{
    protected:
        std::string   _name;
        size_t        _grade;

    public:
        Bureaucrat(void);
        Bureaucrat(std::string const &name);
        Bureaucrat(size_t const &grade);
        Bureaucrat(std::string const &name, size_t const &grade);
        Bureaucrat(const Bureaucrat &data);
        ~Bureaucrat(void);

        Bureaucrat &operator=(Bureaucrat const &data);

        const std::string   &getName(void) const;
        size_t const        &getGrade(void) const;

        // Bureaucrat  &operator++(void);
        // Bureaucrat  &operator--(void);
        // Bureaucrat  operator++(int);
        // Bureaucrat  operator--(int);

        void    incrementGrade(void);
        void    decrementGrade(void);
        void    signForm(Form &form) const;
        void    executeForm(Form const &form);

        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };
};

std::ostream    &operator<<(std::ostream &ostream, Bureaucrat const &data);

#endif