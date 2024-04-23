#pragma once
#include"Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* w;
	public:
		HumanB(std::string str);
		void setWeapon(Weapon &aWeapon);
		void setWeapon(Weapon *aWeapon);
		void attack();
};