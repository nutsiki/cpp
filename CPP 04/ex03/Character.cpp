//
// Created by Nutsiki on 16/02/2022.
//

#include "Character.hpp"

Character::Character(std::string name)
{
	int	i = -1;
	this->m_name = name;
	while (++i < 4)
		m_materia[i] = NULL;
	std::cout << "Parametric constructor Character called." << std::endl;
	return;
}

Character::Character()
{
	this->m_name = "NONE";
	int	i = -1;
	while (++i < 4)
		m_materia[i] = NULL;
	std::cout << "Default constructor Character called." << std::endl;
	return;
}

Character::~Character()
{
	int i = -1;
	std::cout << "Destructor Character called." << std::endl;
	while (++i < 4)
		if (this->m_materia[i])
			delete this->m_materia[i];
	return;
}

Character & Character::operator=(const Character &new_cp)
{
	int i = -1;
	std::cout << "Assignation operator Character called." << std::endl;
	if (this != &new_cp)
	{
		this->m_name = new_cp.m_name;
		while (++i < 4)
		{
			if (new_cp.m_materia[i])
				this->m_materia[i] = new_cp.m_materia[i];
			else
				this->m_materia[i] = NULL;
		}
	}
	return (*this);
}

Character::Character(const Character &src)
{
	std::cout << "Copy constructor Character called." << std::endl;
	*this = src;
	return;
}

const std::string & Character::getName() const
{
	return (this->m_name);
}

void Character::equip(AMateria *m)
{
	int	i = -1;
	while (++i < 4)
	{
		if (this->m_materia[i] == NULL)
		{
			this->m_materia[i] = m;
			std::cout << "Materia " << this->m_materia[i]->getType() << " equiped" << std::endl;
			return;
		}
	}
	std::cout << "All slot are already equiped, unequip a Materia first" << std::endl;
	return;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !this->m_materia[idx])
		std::cout << "Slot : " << idx << "is empty or not available." << std::endl;
	else
	{
		this->m_materia[idx] = NULL;
		std::cout << "Slot : " << idx << "is unequiped !" << std::endl;
	}
	return;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || !this->m_materia[idx])
		std::cout << "Slot : " << idx << "is empty or not available." << std::endl;
	else
	{
		std::cout << "Materia is used." << std::endl;
		this->m_materia[idx]->use(target);
	}
	return;
}