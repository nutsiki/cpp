#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name), m_weapon(weapon)
{
    std::cout << "HumanA constructeur called" << std::endl;
    return;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA destructeur called" << std::endl;
    return;
}

void    HumanA::attack(void)
{
    std::cout << this->m_name << " attacks with his " << this->m_weapon.getType() << std::endl;
    return;
}