#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{
    std::cout << "HumanB constructeur called" << std::endl;
    return;
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB destructeur called" << std::endl;
    return;
}

void    HumanB::attack(void)
{
    std::cout << this->m_name << " attacks with his " << this->m_weapon->getType() << std::endl;
    return;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->m_weapon = &weapon;
    return;
}