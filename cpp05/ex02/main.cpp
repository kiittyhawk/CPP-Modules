#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat              jelly("Jelly", 25);
    Bureaucrat              bill("Bill", 145);
    PresidentialPardonForm  e20("Jelly");
    RobotomyRequestForm     e30("Bill");
    ShrubberyCreationForm   e40("Home");
    std::cout << std::endl;

    std::cout << jelly;
    std::cout << e20;
    std::cout << std::endl;
    std::cout << e30;
    std::cout << std::endl;
    std::cout << e40;
    std::cout << std::endl;

    std::cout << "Test #1" << std::endl;
    jelly.signForm(e20);
    jelly.executeForm(e20);
    std::cout << std::endl;

    std::cout << "Test #2" << std::endl;
    // jelly.signForm(e30);
    jelly.executeForm(e30);
    std::cout << std::endl;

    std::cout << "Test #3" << std::endl;
    jelly.signForm(e30);
    jelly.executeForm(e30);
    jelly.executeForm(e30);
    std::cout << std::endl;

    std::cout << "Test #4" << std::endl;
    bill.signForm(e40);
    jelly.executeForm(e40);
    std::cout << std::endl;

    std::cout << "Test #5" << std::endl;
    jelly.signForm(e40);
    jelly.executeForm(e40);
    std::cout << std::endl;
}