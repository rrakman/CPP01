#pragma once
#include"Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& w;
    public:
        HumanA(std::string str ,Weapon& weapon);
        void attack();
};