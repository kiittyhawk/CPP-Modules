#include "Zombie.hpp"

int main()
{
    Zombie* zombs = zombieHorde(5, "Allie");
    for (int i = 0; i < 5; i++) {
        zombs[i].announce();
    }
    delete[] zombs;
}