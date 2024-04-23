#include"Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *a = zombieHorde(N,"rakman");
    if(a == NULL)
        return -1;
    for(int i = 0;i < N;i++)
        a[i].announce();
    delete [] a;
    return 0;
}
