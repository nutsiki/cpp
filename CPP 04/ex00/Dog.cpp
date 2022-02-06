//
// Created by Nutsiki on 06/02/2022.
//

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor Dog called." << std::endl;
	this->m_type = "Dog";
	return;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Copy constructor Dog called." << std::endl;
	*this = src;
	return;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called." << std::endl;
	return;
}

Dog & Dog::operator=(const Dog &new_cp)
{
	std::cout << "Assignation operator Dog called." << std::endl;
	if (this != &new_cp)
		this->setType(new_cp.getType());
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Sound from Dog" << std::endl;
	return;
}