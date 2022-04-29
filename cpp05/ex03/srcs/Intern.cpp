#include "../includes/Intern.hpp"

Intern::Intern(void)
{
    std::cout << GREEN;
    std::cout << "[Intern] Default constructor called" << std::endl;
    std::cout << RESET;
}

Intern::Intern(const Intern &data)
{
    std::cout << GREEN;
    std::cout << "[Intern] Copy constructor called" << std::endl;
    std::cout << RESET;
}

Intern  &Intern::operator=(const Intern &data)
{
    std::cout << GREEN;
    std::cout << "[Intern] Assignement operator called" << std::endl;
    std::cout << RESET;
    (void) data;
    return (*this);
}

Intern::~Intern(void)
{
    std::cout << RED;
    std::cout << "[Intern] Destructor called" << std::endl;
    std::cout << RESET;
}

Form    *Intern::makeForm(const std::string &fileName, const std::string &fileTarget)
{
    Form    *formPtr = NULL;

    std::string fNames[3] =
    {
        "presidential request",
        "robotomy request",
        "shrubbery request"
    };
    Form    *forms[3] =
    {
        new PresidentialPardonForm(fileTarget),
        new RobotomyRequestForm(fileTarget),
        new ShrubberyCreationForm(fileTarget)
    };
    for (int i = 0; i < 3; i++)
    {
        if (fileName == fNames[i])
            formPtr = forms[i];
        else
            delete forms[i];
    }
    if (formPtr == NULL)
    {
        std::cerr << PURPLE;
        std::cerr << "[Intern] " << fileName << " does not exist" << std::endl;
        std::cerr << RESET;
    }
    else
    {
        std::cout << BLUE;
        std::cout << "[Intern] Intern creates " << fileName << std::endl;
        std::cout << RESET;
    }
    return (formPtr);
}