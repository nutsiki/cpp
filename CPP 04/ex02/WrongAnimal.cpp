//
// Created by Nutsiki on 06/02/2022.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default constructor WrongAnimal called." << std::endl;
	this->m_type = "WrongNone";
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "Copy constructor WrongAnimal called." << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called." << std::endl;
	return;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &new_cp)
{
	std::cout << "Assignation operator WrongAnimal called." << std::endl;
	if (this != &new_cp)
		this->setType(new_cp.getType());
	return (*this);
}

void WrongAnimal::setType(std::string type)
{
	this->m_type = type;
	return;
}

std::string WrongAnimal::getType() const
{
	return (this->m_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Sound from WrongAnimal" << std::endl;
	return;
}