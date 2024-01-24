#pragma once
# include <iostream>

class Zombie
{
    std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void set_Name(std::string name);
        void announce( void );
};

Zombie* zombieHorde( int N, std::string name );