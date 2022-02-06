#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->m_name = "NONAME";
    this->m_hit_points = 100;
    this->m_energy_points = 50;
    this->m_attack_damage = 20;
    std::cout << "Default constructor ScavTrap called.(" << this->m_name << ")" << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name)
{
    this->m_hit_points = 100;
    this->m_energy_points = 50;
    this->m_attack_damage = 20;
    this->m_name = name;
    std::cout << "Parametric constructor ScavTrap called.(" << this->m_name << ")" << std::endl;
    return;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    std::cout << "Copy constructor ScavTrap called" << std::endl;
    *this = src;
    return;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor ScavTrap called.(" << this->m_name << ")" << std::endl;
    return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &new_cp)
{
    std::cout << "Assignation operator ScavTrap called" << std::endl;
    if (this != &new_cp)
    {
        this->setName(new_cp.getName());
        this->setHit(new_cp.getHit());
        this->setEnergy(new_cp.getEnergy());
        this->setAttack(new_cp.getAttack());
    }
    return (*this);
}

void ScavTrap::attack(std::string const &target)
{
	if (this->m_hit_points > 0)
	{
		if (this->m_energy_points > 0)
		{
			this->m_energy_points--;
			std::cout 	<< "ScavTrap " << this->m_name << " uses 1 point of energy to attack "
						<< target << ", causing " << this->m_attack_damage
						<< " points of damage ! He still has "
						<< this->m_energy_points << " energy points." << std::endl;
		}
		else
			std::cout  << "ScavTrap " << this->m_name << " has no more energy points for attack someone." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->m_name << " can't attack, he is already dead." << std::endl;

	return;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->m_name << " have enterred in Gate keeper mode." << std::endl;
    return;
}