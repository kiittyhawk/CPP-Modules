#include "./includes/ClapTrap.hpp"

int main(void)
{
    ClapTrap    pudge("Pudge");
    ClapTrap    rubick("Rubick");
    ClapTrap    morphling("Morphling");

    std::cout << std::endl;
    pudge.attack("Rubick");
    rubick.takeDamage(pudge.getDamage());
    std::cout << std::endl;

    morphling.attack("Pudge");
    pudge.takeDamage(morphling.getDamage());
    std::cout << std::endl;

    rubick.attack("Morphling");
    morphling.takeDamage(rubick.getDamage());
    rubick.beRepaired(10);
    std::cout << std::endl;

    morphling.attack("Rubick");
    rubick.takeDamage(morphling.getDamage());
    std::cout << std::endl;

    pudge.attack("Rubick");
    rubick.takeDamage(pudge.getDamage());
    std::cout << std::endl;

    morphling.attack("Rubick");
    rubick.takeDamage(morphling.getDamage());
    std::cout << std::endl;

    morphling.attack("Pudge");
    pudge.takeDamage(morphling.getDamage());
    std::cout << std::endl;

    morphling.attack("Pudge");
    pudge.takeDamage(morphling.getDamage());
    std::cout << std::endl;
    
    morphling.attack("Pudge");
    pudge.takeDamage(morphling.getDamage());
    std::cout << std::endl;
    morphling.attack("Pudge");
    pudge.takeDamage(morphling.getDamage());
    std::cout << std::endl;
    morphling.attack("Pudge");
    pudge.takeDamage(morphling.getDamage());
    std::cout << std::endl;
    morphling.attack("Pudge");
    pudge.takeDamage(morphling.getDamage());
    std::cout << std::endl;
    morphling.attack("Pudge");
    pudge.takeDamage(morphling.getDamage());
    std::cout << std::endl;
    morphling.attack("Pudge");
    pudge.takeDamage(morphling.getDamage());
    std::cout << std::endl;
}