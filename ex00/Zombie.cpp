#include"Zombie.hpp"

Zombie::Zombie()
{
    std::cout<<"Zombie: is created\n";
}

Zombie::Zombie(std::string name) : name(name)
{
    std::cout<<name+ ": is created\n";
}

Zombie::~Zombie()
{
    std::cout<<this->name + " is DEAD!"<<std::endl;
}

void Zombie::announce( void )
{
    std::cout<<this->name+": BraiiiiiiinnnzzzZ..."<<std::endl;
}

