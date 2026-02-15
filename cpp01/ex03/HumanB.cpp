#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(NULL){}

void HumanB:: attack()
{
    if(!weapon)
    {
        std::cout << name << " has no weapon" << std::endl;
        return;
    }
    std::cout << name << " attacks with their " << weapon->getType() <<std::endl;
    return;
}


void HumanB::setWeapon(Weapon &w)
{
    weapon = &w;
}
