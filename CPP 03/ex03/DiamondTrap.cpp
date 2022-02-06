#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
    this->m_name = "NONAME";
    ClapTrap::m_name = this->m_name + "_clap_name";
    this->m_hit_points = FragTrap::m_hit_points;
    this->m_energy_points = ScavTrap::m_energy_points;
    this->m_attack_damage = FragTrap::m_attack_damage;
    std::cout << "Default constructor DiamondTrap called.(" << this->m_name << ")" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    this->m_name = name;
    ClapTrap::m_name = this->m_name + "_clap_name";
    this->m_hit_points = FragTrap::m_hit_points;
    this->m_energy_points = ScavTrap::m_energy_points;
    this->m_attack_damage = FragTrap::m_attack_damage;
    std::cout << "Parametric constructor DiamondTrap called.(" << this->m_name << ")" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
    std::cout << "Copy constructor DiamondTrap called" << std::endl;
    *this = src;
    return;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Destructor DiamondTrap called.(" << this->m_name << ")" << std::endl;
    return;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &new_cp)
{
    std::cout << "Assignation operator DiamondTrap called" << std::endl;
    if (this != &new_cp)
    {
        this->setName(new_cp.getName());
        this->FragTrap::setHit(new_cp.FragTrap::getHit());
        this->ScavTrap::setEnergy(new_cp.ScavTrap::getEnergy());
        this->FragTrap::setAttack(new_cp.FragTrap::getAttack());
    }
    return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
    return;
}

void DiamondTrap::highFivesGuys(void)
{
    FragTrap::highFivesGuys();
    return;
}

void DiamondTrap::guardGate(void)
{
    ScavTrap::guardGate();
    return;
}

void DiamondTrap::whoAmI(void)
{
    std::cout   << "DiamondTrap Name : " << this->m_name
                << ", ClapTrap Name : " << ClapTrap::getName() << std::endl;
    return;
}