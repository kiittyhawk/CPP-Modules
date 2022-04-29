#include "./includes/Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  *jelly = new Bureaucrat("Jelly", 2);
    Bureaucrat  *bill = new Bureaucrat("Bill", 149);
    std::cout << std::endl;

    std::cout << *jelly;
    std::cout << *bill << std::endl;


    // std::cout << YELLOW;
    // // std::cout << "[Modified] " << ++(*jelly);
    // // std::cout << "[Modified] " << --(*bill);
    // std::cout << "[Modified] " << *jelly;
    // std::cout << "[Modified] " << *bill;
    // std::cout << RESET;
    // std::cout << std::endl;

    try
    {
        jelly->incrementGrade();
        jelly->incrementGrade();
        jelly->incrementGrade();
        std::cout << YELLOW;
        // std::cout << "[Modified] " << ++(*jelly);
        // std::cout << "[Modified] " << --(*bill);
        std::cout << "[Modified] " << *jelly;
        std::cout << "[Modified] " << *bill;
        std::cout << RESET;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED;
        std::cerr << e.what() << '\n';
        std::cerr << RESET;
    }
    std::cout << *jelly << std::endl;
    std::cout << std::endl;

    try
    {
        std::cout << YELLOW;
        bill->decrementGrade();
        // bill->decrementGrade();
        std::cout << "[Modified] " << *bill;
        std::cout << RESET;
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
        jelly->decrementGrade();
        bill->incrementGrade();
        jelly->decrementGrade();
        bill->incrementGrade();
        std::cout << YELLOW;
        std::cout << "[Modified] " << *jelly;
        std::cout << "[Modified] " << *bill;
        // std::cout << "[Modified] " << --(*jelly);
        // std::cout << "[Modified] " << ++(*bill);
        // std::cout << "[Modified] " << --(*jelly);
        // std::cout << "[Modified] " << ++(*bill);
        std::cout << RESET;
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
}