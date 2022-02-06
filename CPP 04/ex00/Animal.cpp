//
// Created by Nutsiki on 06/02/2022.
//

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default constructor Animal called." << std::endl;
	this->m_type = "None";
	return;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Copy constructor Animal called." << std::endl;
	*this = src;
	return;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called." << std::endl;
	return;
}

Animal & Animal::operator=(const Animal &new_cp)
{
	std::cout << "Assignation operator Animal called." << std::endl;
	if (this != &new_cp)
		this->setType(new_cp.getType());
	return (*this);
}

void Animal::setType(std::string type)
{
	this->m_type = type;
	return;
}

std::string Animal::getType() const
{
	return (this->m_type);
}

void Animal::makeSound() const
{
	std::cout << "Sound from Animal" << std::endl;
	return;
}