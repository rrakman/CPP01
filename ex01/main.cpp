#include"Zombie.hpp"

int main()
{
    Zombie *a = zombieHorde(10,"rakman");
    for(int i = 0;i < 10;i++)
        a[i].announce();
    delete [] a;
    return 0;
}
