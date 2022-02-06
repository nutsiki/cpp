//
// Created by Nutsiki on 06/02/2022.
//

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default constructor WrongCat called." << std::endl;
	this->m_type = "WrongCat";
	return;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "Copy constructor WrongCat called." << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called." << std::endl;
	return;
}

WrongCat & WrongCat::operator=(const WrongCat &new_cp)
{
	std::cout << "Assignation operator WrongCat called." << std::endl;
	if (this != &new_cp)
		this->setType(new_cp.getType());
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Sound from WrongCat" << std::endl;
	return;
}