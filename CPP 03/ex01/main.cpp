#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap playerOne("momo");
    ScavTrap playerTwo("loulou");

    playerOne.attack("target");
    playerOne.takeDamage(8);
    playerOne.beRepaired(3);
    playerOne.takeDamage(6);
    playerOne.attack("target");
    playerOne.beRepaired(3);


    playerTwo.attack("target");
    playerTwo.takeDamage(8);
    playerTwo.beRepaired(3);
    playerTwo.takeDamage(6);
    playerTwo.attack("target");
    playerTwo.beRepaired(3);
    playerTwo.guardGate();

    return (0);
}