#include "./includes/ScavTrap.hpp"

int main(void)
{
    ScavTrap    riki("Riki");
    ScavTrap    pudge("Pudge");

    std::cout << std::endl;
    riki.attack("Pudge");
    pudge.takeDamage(riki.getDamage());
    std::cout << std::endl;

    if (!pudge.checkMode())
        pudge.guardGate();
    pudge.attack("Riki");
    riki.takeDamage(pudge.getDamage());
    std::cout << std::endl;

    if (pudge.checkMode())
        riki.beRepaired(20);
    else
        riki.beRepaired(10);
    riki.attack("Pudge");
    pudge.takeDamage(riki.getDamage());
    std::cout << std::endl;

    pudge.guardGate();
    riki.attack("Pudge");
    pudge.takeDamage(riki.getDamage());
    std::cout << std::endl;

    if (pudge.checkMode())
    {
        pudge.attack("Riki");
        riki.takeDamage(pudge.getDamage());
    }
    else
    {
        pudge.guardGate();
        pudge.beRepaired(100);
    }
}