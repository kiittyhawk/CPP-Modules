#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(), _guard_mode(false)
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    std::cout << GREEN;
    std::cout << "ScavTrap: Default constructor " << this->_name << " called" << std::endl;
    std::cout << RESET;
}

ScavTrap::ScavTrap(const ScavTrap &data) : ClapTrap(data), _guard_mode(data._guard_mode)
{
    std::cout << GREEN;
    std::cout << "ScavTrap: Copy constructor " << this->_name << " called" << std::endl;
    std::cout << RESET;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _guard_mode(false)
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    std::cout << GREEN;
    std::cout << "ScavTrap: Default constructor " << this->_name << " called" << std::endl;
    std::cout << RESET;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << RED;
    std::cout << "ScavTrap: Destructor " << this->_name << " called" << std::endl;
    std::cout << RESET;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &data)
{
    ClapTrap::operator=(data);
    this->_guard_mode = data._guard_mode;
    std::cout << BLACK;
    std::cout << "Operator = " << this->_name << " called" << std::endl;
    std::cout << RESET;
    return (*this);
}

void    ScavTrap::attack(std::string const &target)
{
    if (!this->_checkAction("Attack"))
        return ;
    this->_energyPoint--;
    std::cout << YELLOW;
    std::cout << "ScavTrap: " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point of damage" << std::endl;
    std::cout << "ScavTrap: " << this->_name << " has " << this->_energyPoint << " energy now." << std::endl;
    std::cout << RESET;
}

void    ScavTrap::guardGate(void)
{
    if (!this->_checkAction("Gate"))
        return ;
    std::cout << PURPLE;
    if (!this->checkMode())
    {
        std::cout << "ScavTrap: " << this->_name << " is now in Gatekeeper mode." << std::endl;
        this->_guard_mode = true;
    }
    else
    {
        std::cout << "ScavTrap: " << this->_name << " exited Gatekeeper mode." << std::endl;
        this->_guard_mode = false;
    }
    this->_energyPoint--;
    std::cout << "ScavTrap: " << this->_name << " has " << this->_energyPoint << " energy now." << std::endl;
    std::cout << RESET;
}

bool    ScavTrap::checkMode(void) const
{
    return (this->_guard_mode);
}