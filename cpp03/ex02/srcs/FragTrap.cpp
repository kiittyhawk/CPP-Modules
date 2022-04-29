#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << GREEN;
    std::cout << "FragTrap: Default constructor " << this->_name << " called" << std::endl;
    std::cout << RESET; 
}

FragTrap::FragTrap(FragTrap const &data) : ClapTrap(data)
{
    std::cout << GREEN;
    std::cout << "FragTrap: Copy constructor " << this->_name << " called" << std::endl;
    std::cout << RESET;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << GREEN;
    std::cout << "FragTrap: Default constructor " << this->_name << " called" << std::endl;
    std::cout << RESET;
}

FragTrap::~FragTrap(void)
{
    std::cout << RED;
    std::cout << "FragTrap: Destructor " << this->_name << " called" << std::endl;
    std::cout << RESET;
}

FragTrap    &FragTrap::operator=(FragTrap const &data)
{
    ClapTrap::operator=(data);
    std::cout << BLACK;
    std::cout << "FragTrap: Operator = " << this->_name << " called" << std::endl;
    std::cout << RESET;
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    if (!this->_checkAction("High Fives Guys"))
        return ;
    this->_energyPoint--;
    std::cout << PURPLE;
    std::cout << "FragTrap: " << this->_name << " positive high fives request" << std::endl;
    std::cout << "ScavTrap: " << this->_name << " has " << this->_energyPoint << " energy now." << std::endl;
    std::cout << RESET;
}
