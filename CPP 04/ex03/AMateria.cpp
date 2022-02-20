//
// Created by Nutsiki on 06/02/2022.
//

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->m_type = type;
	std::cout << "Parametric constructor AMateria called." << std::endl;
	return;
}

AMateria::AMateria()
{
	this->m_type = "NONE";
	std::cout << "Default constructor AMateria called." << std::endl;
	return;
}

AMateria::~AMateria()
{
	std::cout << "Destructor AMateria called." << std::endl;
	return;
}

AMateria & AMateria::operator=(const AMateria &new_cp)
{
	std::cout << "Assignation operator AMateria called." << std::endl;
	if (this != &new_cp)
		this->m_type = new_cp.getType();
	return (*this);
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "Copy constructor AMateria called." << std::endl;
	*this = src;
	return;
}

std::string const & AMateria::getType() const
{
	return (this->m_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	return;
}