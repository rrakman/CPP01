#include"Zombie.hpp"

Zombie::Zombie()
{
    std::cout<<"Zombie: is created\n";
}

Zombie::Zombie(std::string name) : name(name)
{
    std::cout<<"Zombie: " + name + " is created\n";
}

Zombie::~Zombie()
{
    std::cout<<"Zombie is DEAD!"<<std::endl;
}

void Zombie::announce( void )
{
    std::cout<<this->name+": BraiiiiiiinnnzzzZ..."<<std::endl;
}

