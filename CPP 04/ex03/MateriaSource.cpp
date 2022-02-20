//
// Created by Nutsiki on 17/02/2022.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	i = -1;
	while (++i < 4)
		m_materia[i] = NULL;
	std::cout << "Default constructor MateriaSource called." << std::endl;
	return;
}

MateriaSource::~MateriaSource()
{
	int i = -1;
	std::cout << "Destructor MateriaSource called." << std::endl;
	while (++i < 4)
		if (this->m_materia[i])
			delete this->m_materia[i];
	return;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &new_cp)
{
	int i = -1;
	std::cout << "Assignation operator MateriaSource called." << std::endl;
	if (this != &new_cp)
	{
		while (++i < 4)
		{
			if (new_cp.m_materia[i])
				this->m_materia[i] = new_cp.m_materia[i]->clone();
			else
				this->m_materia[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "Copy constructor MateriaSource called." << std::endl;
	*this = src;
	return;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m_materia[i] == NULL)
		{
			this->m_materia[i] = m;
			std::cout << "Materia learned!" << std::endl;
			return ;
		}
	}
	std::cout << "Source is full, you cant learn anymore" << std::endl;
	return ;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m_materia[i]->getType() == type)
		{
			std::cout << "Materia created!" << std::endl;
			return (this->m_materia[i]->clone());
		}
	}
	std::cout << "Materia is not learned..." << std::endl;
	return (NULL);
}