#pragma once
# include <iostream>


class Zombie
{
    std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
};

void randomChump( std::string name );
Zombie* newZombie(std::string name);
