#include"Weapon.hpp"

Weapon::Weapon(std::string name)
{
    setType(name);
}

const std::string& Weapon::get_Type()
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

