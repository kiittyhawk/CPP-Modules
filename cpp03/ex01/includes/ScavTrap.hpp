#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        bool    _guard_mode;

    public:
        ScavTrap(void);
        ScavTrap(ScavTrap const &data);
        ScavTrap(std::string name);
        ~ScavTrap(void);

        ScavTrap &operator=(ScavTrap const &data);

        void    attack(std::string const &target);
        void    guardGate(void);
        bool    checkMode(void) const;
};

#endif