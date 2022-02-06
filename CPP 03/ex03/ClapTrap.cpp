//
// Created by Nutsiki on 05/02/2022.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    this->m_name = "NONAME";
    this->m_hit_points = 10;
    this->m_energy_points = 10;
    this->m_attack_damage = 0;
    std::cout <<"Default constructor ClapTrap called.(" << this->m_name << ")" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name)
{
    this->m_name = name;
    this->m_hit_points = 10;
    this->m_energy_points = 10;
    this->m_attack_damage = 0;
    std::cout <<"Parametric constructor ClapTrap called.(" << this->m_name << ")" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy constructor ClapTrap called" << std::endl;
    *this = src;
    return;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor ClapTrap called.(" << this->m_name << ")" << std::endl;
    return;
}

void ClapTrap::setName(std::string const name)
{
    this->m_name = name;
    return;
}

std::string ClapTrap::getName(void) const
{
    return (this->m_name);
}

void ClapTrap::setHit(unsigned int const hit)
{
    this->m_hit_points = hit;
    return;
}

unsigned int ClapTrap::getHit(void) const
{
    return (this->m_hit_points);
}

void ClapTrap::setEnergy(unsigned int const energy)
{
    this->m_energy_points = energy;
    return;
}

unsigned int ClapTrap::getEnergy(void) const
{
    return (this->m_energy_points);
}

void ClapTrap::setAttack(unsigned int const attack)
{
    this->m_attack_damage = attack;
    return;
}

unsigned int ClapTrap::getAttack(void) const
{
    return (this->m_attack_damage);
}
ClapTrap &ClapTrap::operator=(const ClapTrap &new_cp)
{
    std::cout << "Assignation operator ClapTrap called" << std::endl;
    if (this != &new_cp)
    {
        this->setName(new_cp.getName());
        this->setHit(new_cp.getHit());
        this->setEnergy(new_cp.getEnergy());
        this->setAttack(new_cp.getAttack());
    }
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if (this->m_hit_points > 0)
    {
        if (this->m_energy_points > 0)
        {
            this->m_energy_points--;
            std::cout   << this->m_name << " uses 1 point of energy to attack "
                        << target << ", causing " << this->m_attack_damage
                        << " points of damage ! He still has "
                        << this->m_energy_points << " energy points." << std::endl;
        }
        else
            std::cout  << this->m_name << " has no more energy points for attack someone." << std::endl;
    }
    else
        std::cout << this->m_name << " can't attack, he is already dead." << std::endl;

    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->m_hit_points > 0)
    {
        if (m_hit_points > amount)
        {
            this->m_hit_points -= amount;
            std::cout << this->m_name << " received " << amount << " damages."
            << " He still has " << this->m_hit_points << " HP." << std::endl;

        }
        else
        {
            this->m_hit_points = 0;
            std::cout << this->m_name << " received " << amount << " damages."
                      << " He has no more life points, he dies." << std::endl;
        }
    }
    else
        std::cout << "ClapTrap " << this->m_name << " can't take damage, he is already dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->m_attack_damage == 0)
        std::cout   << this->m_name << " currently has " << this->m_hit_points << "/10 HP and "
                    << this->m_energy_points << "/10 EP." << std::endl;
    else if (this->m_attack_damage == 20)
        std::cout   << this->m_name << " currently has " << this->m_hit_points << "/100 HP and "
                    << this->m_energy_points << "/50 EP." << std::endl;
    else
        std::cout   << this->m_name << " currently has " << this->m_hit_points << "/100 HP and "
                    << this->m_energy_points << "/100 EP." << std::endl;
    if (this->m_hit_points == 0)
        std::cout << this->m_name << " has resurrected." << std::endl;
    else
        std::cout << this->m_name << " has been repaired." << std::endl;
    this->m_energy_points += amount;
    this->m_hit_points += amount;
    if (this->m_attack_damage == 0)
    {
        if (this->m_energy_points > 10)
            this->m_energy_points = 10;
        if (this->m_hit_points > 10)
            this->m_hit_points = 10;
        std::cout   << this->m_name << " has after being repaired " << this->m_hit_points
                    << "/10 HP and " << this->m_energy_points << "/10 EP." << std::endl;
    }
    else if (this->m_attack_damage == 20)
    {
        if (this->m_energy_points > 50)
            this->m_energy_points = 50;
        if (this->m_hit_points > 100)
            this->m_hit_points = 100;
        std::cout   << this->m_name << " has after being repaired " << this->m_hit_points
                    << "/100 HP and " << this->m_energy_points << "/50 EP." << std::endl;
    }
    else
    {
        if (this->m_energy_points > 100)
            this->m_energy_points = 100;
        if (this->m_hit_points > 100)
            this->m_hit_points = 100;
        std::cout   << this->m_name << " has after being repaired " << this->m_hit_points
                    << "/100 HP and " << this->m_energy_points << "/100 EP." << std::endl;
    }

    return;

}