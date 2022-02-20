//
// Created by Nutsiki on 17/02/2022.
//

#include "Ice.hpp"

Ice::Ice()
{
	this->m_type = "ice";
	std::cout << "Default constructor Ice called." << std::endl;
	return;
}

Ice::~Ice()
{
	std::cout << "Destructor Ice called." << std::endl;
	return;
}

Ice & Ice::operator=(const Ice &new_cp)
{
	std::cout << "Assignation operator Ice called." << std::endl;
	if (this != &new_cp)
		this->m_type = new_cp.getType();
	return (*this);
}

Ice::Ice(const Ice &src) : AMateria("ice")
{
	std::cout << "Copy constructor Ice called." << std::endl;
	*this = src;
	return;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}

AMateria * Ice::clone() const
{
	std::cout << "Materia Ice cloned" << std::endl;
	return (new Ice(*this));
}