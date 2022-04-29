#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137), _target("Default")
{
    // std::cout << GREEN;
    // std::cout << "[ShrubberyCreationForm] Default constructor called" << std::endl;
    // std::cout << RESET;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    // std::cout << GREEN;
    // std::cout << "[ShrubberyCreationForm] Default constructor called with target " << this->getTarget() << std::endl;
    // std::cout << RESET;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &data): Form(data), _target(data.getTarget())
{
    // std::cout << GREEN;
    // std::cout << "[ShrubberyCreationForm] Copy constructor called" << std::endl;
    // std::cout << RESET;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    // std::cout << RED;
    // // std::string file = this->getTarget() + "_shrubbery";
    // // if (!std::remove(file.c_str()))
    // //     std::cout << "[ShrubberyCreationForm] " << this->getTarget() + "_shrubbery deleted" << std::endl; 
    // std::cout << "[ShrubberyCreationForm] Destructor called" << std::endl;
    // std::cout << RESET;
    
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &data)
{
    (void) data;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return (this->_target);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::gradeCheck(executor.getGrade(), *this);
    Form::isSigned();
    try
    {
        std::ofstream output;
        output.open(this->getTarget() + "_shrubbery", std::ios::trunc);
        if (!output)
            throw outputErr();
        output
            << "____________ ¶¶¶_______¶¶¶¶ \n"
            << "__________¶¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶ \n"
            << "_________ ¶¶____¶¶¶¶__¶¶__¶¶¶\n"
            << "_________¶¶¶¶¶¶¶___¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n"
            << "________¶¶__¶¶¶_____¶¶¶________¶_¶____¶¶¶¶¶ \n"
            << "________¶¶_________________¶¶¶¶¶___¶¶¶¶¶__¶ \n"
            << "________¶¶__________________¶¶¶¶___¶¶¶¶___¶ \n"
            << "______¶__ ¶_________________¶¶¶___________¶¶ \n"
            << "_____¶¶_¶¶¶_______________________________¶¶¶ \n"
            << "_¶¶¶¶¶¶¶¶¶_________¶____________________¶__¶¶ \n"
            << "¶¶¶¶___¶¶______¶¶¶¶¶______¶_¶¶¶_________¶¶¶¶¶¶¶ \n"
            << "¶¶_______________¶¶_______¶¶¶¶______________¶¶¶¶ \n"
            << "¶¶¶________________________¶¶_________________¶¶ \n"
            << "_¶¶¶ _________________¶¶__________________¶____¶¶ \n"
            << "__¶¶ _____¶________¶¶¶¶¶_______________¶¶¶¶¶___¶¶ \n"
            << "__¶¶ __¶¶¶¶_________¶¶¶¶________________¶¶¶¶____¶¶ \n"
            << "_¶¶___¶¶¶¶¶______________________________¶¶_____¶¶ \n"
            << "¶¶¶_____¶¶_____¶¶¶_¶¶¶¶¶¶_¶¶¶¶_¶¶¶___¶¶________¶¶¶ \n"
            << "¶¶ ______________¶_¶___¶¶__¶_¶_¶¶¶¶¶¶¶¶_______¶¶¶¶ \n"
            << "¶¶¶_____¶¶¶¶¶¶¶¶___¶¶___¶_¶¶¶_¶¶_¶¶¶¶¶______¶¶¶¶ \n"
            << "_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__¶¶__¶_¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶¶ \n"
            << "___¶¶¶¶________¶¶¶¶¶_¶¶¶¶___¶¶______¶¶¶¶¶¶¶¶ \n"
            << "_________________¶¶¶__¶¶¶_¶¶¶ \n"
            << "__________________¶¶______¶¶ \n"
            << "__________________¶¶__¶¶__¶¶________ \n"
            << "______________ ___¶¶_¶¶¶¶_¶¶___________ \n"
            << "__________________¶__¶¶___¶________¶¶¶¶¶¶¶¶¶¶ \n"
            << "__¶¶¶¶¶¶¶¶¶¶¶¶ ___¶¶__¶___¶____________¶¶¶¶¶¶¶¶¶¶ \n"
            << "¶¶¶¶¶¶¶¶¶¶_______¶¶¶______¶______________________ \n"
            << "________________ ¶¶_______¶¶_____________________ \n"
            << "________________¶¶________¶¶¶____________________ \n"
            << "______________¶¶¶__¶¶¶¶__¶¶_¶J¶__________________ \n"
            << "______________¶¶__¶¶__¶¶__¶__¶K¶________________ \n"
            << "____________ ¶¶__¶¶____¶¶_¶___¶¶_________________ \n";
        output.close();
    }
    catch(const std::exception& e)
    {
        std::cerr << RED;
        std::cerr << "[ShrubberyCreationForm] " << this->getTarget() + "_shrubbery " << e.what() << "\n";
        std::cerr << RESET;
    }
}