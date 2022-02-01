#include "Weapon.hpp"

Weapon::Weapon(std::string type) : m_type(type)
{
    std::cout << "Weapon constructeur called" << std::endl;
    return;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon destructeur called" << std::endl;
    return;
}

const std::string &Weapon::getType(void)
{
    return(this->m_type);
}

void Weapon::setType(std::string type)
{
    this->m_type = type;
    return;
}