#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap playerOne("momo");
    ScavTrap playerTwo("loulou");
    FragTrap playerThree("riri");
    DiamondTrap playerFour("fifi");

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

    playerThree.attack("target");
    playerThree.takeDamage(8);
    playerThree.beRepaired(3);
    playerThree.takeDamage(6);
    playerThree.attack("target");
    playerThree.beRepaired(3);
    playerThree.highFivesGuys();

//    playerFour.attack("target");
//    playerFour.takeDamage(8);
//    playerFour.beRepaired(3);
//    playerFour.takeDamage(6);
//    playerFour.attack("target");
//    playerFour.beRepaired(3);
//    playerFour.highFivesGuys();
//    playerFour.guardGate();
//    playerFour.whoAmI();


    return (0);
}