#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "constructeur called" << std::endl;
    return;
}

void Zombie::setName(std::string name)
{
    this->m_name = name;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "destructeur called" << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->m_name << ">" << "BraiiiiiiinnnzzzZ..." << std::endl;
}