#include"Zombie.hpp"

int main()
{
    int n = 100;
    Zombie *a = zombieHorde(n,"rakman");
    for(int i = 0;i < n;i++)
        a[i].announce();
    delete [] a;
    return 0;
}
