#ifndef PRESEDENTIALPARDONFORM_HPP
#define PRESEDENTIALPARDONFORM_HPP

#include "./Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &data);
        ~PresidentialPardonForm(void);

        PresidentialPardonForm &operator=(const PresidentialPardonForm &data);

        void                execute(Bureaucrat const &executor) const;
        const std::string   &getTarget(void) const;
};

#endif