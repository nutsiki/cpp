#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->m_name = "NONAME";
    this->m_hit_points = 100;
    this->m_energy_points = 100;
    this->m_attack_damage = 30;
    std::cout << "Default constructor FragTrap called.(" << this->m_name << ")" << std::endl;
    return;
}

FragTrap::FragTrap(std::string name)
{
    this->m_hit_points = 100;
    this->m_energy_points = 100;
    this->m_attack_damage = 30;
    this->m_name = name;
    std::cout << "Parametric constructor FragTrap called.(" << this->m_name << ")" << std::endl;
    return;
}

FragTrap::FragTrap(const FragTrap &src)
{
    std::cout << "Copy constructor FragTrap called" << std::endl;
    *this = src;
    return;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor FragTrap called.(" << this->m_name << ")" << std::endl;
    return;
}

FragTrap &FragTrap::operator=(const FragTrap &new_cp)
{
    std::cout << "Assignation operator FragTrap called" << std::endl;
    if (this != &new_cp)
    {
        this->setName(new_cp.getName());
        this->setHit(new_cp.getHit());
        this->setEnergy(new_cp.getEnergy());
        this->setAttack(new_cp.getAttack());
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout  << "*** CLAP *** " << this->m_name << " made a high fives" << std::endl;
    return;
}