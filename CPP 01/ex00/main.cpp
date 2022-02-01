#include "Zombie.hpp"

int main(void)
{
    Zombie* heap;
    randomChump("stack");
    heap = newZombie("heap");
    heap->announce();
    delete heap;
    return (0);
}