#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N < 0)
    {
        std::cout<<"error, you cant create negative number of zombies\n";
        return NULL;
    }
    else
    {
        Zombie *arrZombies = new Zombie[N];
        for(int i = 0;i < N;i++)
            arrZombies[i].set_Name(name);
        return arrZombies;
    }
}