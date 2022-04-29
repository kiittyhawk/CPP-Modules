#include "./includes/FragTrap.hpp"
#include "./includes/ScavTrap.hpp"

int main(void)
{
    ScavTrap    wisp("Wisp");
    FragTrap    Huskar("Huskar");

    std::cout << std::endl;
    wisp.attack("Huskar");
    Huskar.takeDamage(wisp.getDamage());
    std::cout << std::endl;

    Huskar.attack("Wisp");
    wisp.takeDamage(Huskar.getDamage());
    std::cout << std::endl;

    Huskar.highFivesGuys();
    std::cout << std::endl;

    if (wisp.checkMode())
        wisp.guardGate();
    wisp.attack("Huskar");
    Huskar.takeDamage(wisp.getDamage());
    std::cout << std::endl;

    wisp.attack("Huskar");
    Huskar.takeDamage(wisp.getDamage());
    std::cout << std::endl;

    wisp.attack("Huskar");
    Huskar.takeDamage(wisp.getDamage());
    std::cout << std::endl;

    Huskar.beRepaired(1000);
    Huskar.highFivesGuys();
    std::cout << std::endl;

    wisp.attack("Huskar");
    Huskar.takeDamage(wisp.getDamage());
    std::cout << std::endl;

    wisp.attack("Huskar");
    Huskar.takeDamage(wisp.getDamage());
    std::cout << std::endl;
}