#include "Zombie.hpp"


int main()
{
    Zombie *horde= zombieHorde(8, "Frank");

    int i = 0;
    while (i < 8)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
    return 0;
}
