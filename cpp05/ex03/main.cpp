#include "./includes/Intern.hpp"

int main(void)
{
    Intern someRandomIntern;
    Form* rrf;

    std::cout << std::endl;
    std::cout << "Test #1" << std::endl;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << std::endl;
    std::cout << *rrf << std::endl;

    delete rrf;
    std::cout << "Test #2" << std::endl;
    rrf = someRandomIntern.makeForm("request", "Bender");
    std::cout << *rrf << std::endl;
    std::cout << std::endl;

    delete rrf;
    std::cout << "Test #3" << std::endl;
    rrf = someRandomIntern.makeForm("shrubbery request", "Tree");
    std::cout << *rrf << std::endl;
    // std::cout << std::endl;

    delete rrf;
}