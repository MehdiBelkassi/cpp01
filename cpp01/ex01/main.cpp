#include "Zombie.hpp"


int main()
{
    Zombie *horde= zombieHorde(10, "hamouda");

    int i = 0;
    while (i < 10)
    {
        horde[i].announce();
        i++;
    }

    delete[] horde;
}