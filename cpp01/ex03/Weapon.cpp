#include "Weapon.hpp"

Weapon::Weapon(std::string n)
{
    type = n;
}

const std::string& Weapon::getType() const
{
    return (type);
}

void Weapon::setType(std::string n)
{
    type = n;
}
