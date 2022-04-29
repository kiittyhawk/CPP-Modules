#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "Color.hpp"

class ClapTrap
{
    private:
        std::string _name;
        unsigned    _hitPoint;
        unsigned    _energyPoint;
        unsigned    _attackDamage;

        bool    _checkAction(std::string const &action) const;

    public:
        ClapTrap(void);
        ClapTrap(ClapTrap const &data);
        ClapTrap(std::string _name);
        ~ClapTrap(void);

		ClapTrap &operator =(ClapTrap const &data);

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        unsigned    getDamage(void) const;
};

#endif