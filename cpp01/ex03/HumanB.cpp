#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), gun(NULL) {}

HumanB::~HumanB() {}

void    HumanB::attack() {
    if (this->gun)
        std::cout << this->name << " attacks with their " << this->gun->getType() << std::endl;
    else
        std::cout << this->name << " their is no weapon" << std::endl;
}

void    HumanB::setWeapon(Weapon &gun) {
    this->gun = &gun;
}