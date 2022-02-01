#include "Zombie.hpp"

int main(void)
{
    Zombie* horde;
    horde = zombieHorde(4, "horde");
    horde[0].announce();
    horde[1].announce();
    horde[2].announce();
    horde[3].announce();
    delete [] horde;
    return (0);
}