#pragma once
#include<iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string name);
        const std::string& get_Type();
        void setType(std::string type);
};