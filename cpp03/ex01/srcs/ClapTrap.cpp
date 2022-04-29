#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << GREEN;
    std::cout << "Default constructor " << this->_name << " called" << std::endl;
    std::cout << RESET;
}

ClapTrap::ClapTrap(const ClapTrap &data) : _name(data._name), _hitPoint(data._hitPoint), _energyPoint(data._energyPoint), _attackDamage(data._attackDamage)
{
    std::cout << GREEN;
    std::cout << "Copy constructor " << this->_name << " called" << std::endl;
    std::cout << RESET;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(2)
{
    std::cout << GREEN;
    std::cout << "Default constructor " << this->_name << " called" << std::endl;
    std::cout << RESET;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << RED;
    std::cout << "Destructor " << this->_name << " called" << std::endl;
    std::cout << RESET;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &data)
{
    this->_name = data._name;
    this->_hitPoint = data._hitPoint;
    this->_energyPoint = data._energyPoint;
    this->_attackDamage = data._attackDamage;
    std::cout << BLUE;
    std::cout << "Operator = " << this->_name << " called" << std::endl;
    std::cout << RESET;
    return (*this);
}

bool    ClapTrap::_checkAction(std::string const &action) const
{
    if (this->_hitPoint == 0 || this->_energyPoint == 0)
    {
        std::cout << PURPLE;
        std::cout << this->_name << " is died. He can't execute \"" << action << "\"." << std::endl;
        std::cout << RESET;
        return (false); 
    }
    return (true);
}

void    ClapTrap::attack(std::string const &target)
{
    if (!this->_checkAction("Attack"))
        return ;
    this->_energyPoint--;
    std::cout << YELLOW;
    std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    std::cout << this->_name << " has " << this->_energyPoint << " energy now." << std::endl;
    std::cout << RESET;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoint == 0)
    {
        std::cout << PURPLE;
        std::cout << this->_name << " is died" << std::endl;
        std::cout << RESET;
        return ;
    }
    std::cout << YELLOW;
    std::cout << this->_name << " took " << amount << " points of damage" << std::endl;
    std::cout << RESET;
    if (amount >= this->_hitPoint)
    {
        this->_hitPoint = 0;
        std::cout << PURPLE;
        std::cout << this->_name << " is died" << std::endl;
        std::cout << RESET;
    }
    else
    {
        this->_hitPoint -= amount;
        std::cout << YELLOW;
        std::cout << this->_name << "'s hit points is now " << this->_hitPoint << std::endl;
        std::cout << RESET;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->_checkAction("Repaire"))
        return ;
    this->_energyPoint--;
    std::cout << WHITE;
    this->_hitPoint += amount;
    std::cout << this->_name << " repaired health by " << amount << " hit points" << std::endl;
    std::cout << this->_name << "'s hit points is now " << this->_hitPoint << std::endl;
    std::cout << this->_name << " has " << this->_energyPoint << " energy now." << std::endl;
    std::cout << RESET;
}

unsigned    ClapTrap::getDamage(void) const 
{
    return (this->_attackDamage);
}
