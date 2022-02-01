#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];
    int i = -1;
    while (++i < N)
    {
        horde[i].setName(name);
    }
    return (horde);
}