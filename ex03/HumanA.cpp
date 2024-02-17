#include"HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& weapon) : name(str), w(weapon)
{
    
}

void HumanA::attack()
{
    std::cout<<this->name<<" attacks with their "<<w.get_Type()<<std::endl;
}