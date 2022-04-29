#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "./Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &data);
        ~RobotomyRequestForm(void);

        RobotomyRequestForm &operator=(const RobotomyRequestForm &data);

        void            execute(Bureaucrat const &executor) const;
        std::string     getTarget(void) const;
};

#endif