#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* heap_zombie = new Zombie();
    heap_zombie->setName(name);

    return heap_zombie;
}