#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap playerOne("momo");

    playerOne.attack("target");
    playerOne.takeDamage(8);
    playerOne.beRepaired(3);
    playerOne.takeDamage(6);
    playerOne.attack("target");
    playerOne.beRepaired(3);

    return (0);
}