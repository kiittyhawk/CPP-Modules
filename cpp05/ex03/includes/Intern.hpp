#ifndef INTERN_HPP
#define INTERN_HPP

#include "./ShrubberyCreationForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"

class Intern
{
    public:
        Intern(void);
        Intern(Intern const &data);
        ~Intern(void);

        Intern  &operator=(Intern const &data);
        Form    *makeForm(std::string const &formName, std::string const &formTarget);
};

#endif