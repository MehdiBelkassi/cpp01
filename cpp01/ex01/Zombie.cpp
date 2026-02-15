#include "Zombie.hpp"

void   Zombie::set_name(std::string n)
{
    name = n;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(std::string n)
{
    set_name(n);
}
