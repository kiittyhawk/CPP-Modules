#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(FragTrap const &data);
        FragTrap(std::string name);
        ~FragTrap(void);

        FragTrap    &operator=(FragTrap const &data);

        void highFivesGuys(void);
};

#endif