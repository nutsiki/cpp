//
// Created by Nutsiki on 17/02/2022.
//

#include "Cure.hpp"

Cure::Cure()
{
	this->m_type = "cure";
	std::cout << "Default constructor Cure called." << std::endl;
	return;
}

Cure::~Cure()
{
	std::cout << "Destructor Cure called." << std::endl;
	return;
}

Cure & Cure::operator=(const Cure &new_cp)
{
	std::cout << "Assignation operator Cure called." << std::endl;
	if (this != &new_cp)
		this->m_type = new_cp.getType();
	return (*this);
}

Cure::Cure(const Cure &src) : AMateria("cure")
{
	std::cout << "Copy constructor Cure called." << std::endl;
	*this = src;
	return;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds * " << std::endl;
	return;
}

AMateria * Cure::clone() const
{
	std::cout << "Materia Cure cloned" << std::endl;
	return (new Cure(*this));
}