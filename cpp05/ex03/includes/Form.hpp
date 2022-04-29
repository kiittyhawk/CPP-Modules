#ifndef FORM_HPP
#define FORM_HPP

#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _signed;
        const size_t        _gradeSign;
        const size_t        _gradeExec;

    public:
        Form(void);
        Form(std::string const &name, size_t const &gradeSign, size_t const &gradeExec);
        Form(const Form &data);
        virtual ~Form(void);

        Form &operator=(Form const &data);

        const std::string   &getName(void) const;
        bool const          &getSigned(void) const;
        size_t const        &getGradeSign(void) const;
        size_t const        &getGradeExec(void) const;

        void    beSigned(const Bureaucrat &burt);
        void    gradeCheck(size_t const &grade, Form const &form) const;
        void    isSigned(void) const;

        virtual void    execute(Bureaucrat const &executor) const = 0;

        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };
        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw();
        };
        class outputErr : public std::exception
        {
            virtual const char *what() const throw();
        };
        class IsNotSigned : public std::exception
        {
            virtual const char *what() const throw();
        };
};
std::ostream &operator<<(std::ostream &ostream, Form const &data);

#endif