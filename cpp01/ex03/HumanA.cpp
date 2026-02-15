#include "HumanA.hpp"


HumanA::HumanA(std::string n, Weapon &weapon) : name(n), w(weapon) {}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << w.getType() <<std::endl;
    return;
}
