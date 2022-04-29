#include "Zombie.hpp"

int main() {

    Zombie* newzombie = newZombie("Ted");
    newzombie->announce();
    randomChump("Allie");
    delete newzombie;
}