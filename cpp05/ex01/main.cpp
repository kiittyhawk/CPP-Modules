#include "./includes/Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  *jelly = new Bureaucrat("Jelly", 2);
    Bureaucrat  *bill = new Bureaucrat("Bill", 149);
    Form        *form = new Form("28B", 40, 20);
    std::cout << std::endl;

    std::cout << *jelly;
    std::cout << *bill;
    std::cout << *form;
    std::cout << std::endl;

    try
    {
        Form form2("30Q", 151, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << RED;
        std::cerr << e.what() << '\n';
        std::cerr << RESET;
    }
    std::cout << std::endl;
    try
    {
        jelly->signForm(*form);
        std::cout << (form->getSigned() ? "Form is signed" : "Form isn't signed") << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED;
        std::cerr << e.what() << '\n';
        std::cerr << RESET;
    }
    std::cout << std::endl;
    delete jelly;
    delete bill;
    delete form;
}