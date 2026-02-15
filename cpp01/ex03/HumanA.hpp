#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &w;
    public:
        HumanA(std::string n, Weapon &weapon);
        void    attack();
};



#endif
