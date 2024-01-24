#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *arrZombies = new Zombie[N];
    for(int i = 0;i < N;i++)
        arrZombies[i].set_Name(name);
    return arrZombies;
}