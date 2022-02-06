//
// Created by Nutsiki on 06/02/2022.
//

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructor Cat called." << std::endl;
	this->m_type = "Cat";
	return;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Copy constructor Cat called." << std::endl;
	*this = src;
	return;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called." << std::endl;
	return;
}

Cat & Cat::operator=(const Cat &new_cp)
{
	std::cout << "Assignation operator Cat called." << std::endl;
	if (this != &new_cp)
		this->setType(new_cp.getType());
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Sound from Cat" << std::endl;
	return;
}