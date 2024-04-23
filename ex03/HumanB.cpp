#include"HumanB.hpp"

HumanB::HumanB(std::string str) : name(str)
{
	w = NULL;
}

void HumanB::setWeapon(Weapon &aWeapon)
{
	this->w = &aWeapon;
}
void HumanB::setWeapon(Weapon *aWeapon)
{
	if(aWeapon == NULL)
		return;
	else
		w = aWeapon;
}

void HumanB::attack()
{
	if(this->w != NULL)
    	std::cout<<this->name<<" attacks with their "<<w->get_Type()<<std::endl;
	else
    	std::cout<<this->name<<" can't attacks"<<std::endl;

}