//
// Created by Nutsiki on 06/02/2022.
//

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructor Cat called." << std::endl;
	this->m_type = "Cat";
	this->m_brain = new Brain;
	return;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Copy constructor Cat called." << std::endl;
	this->m_brain = new Brain;
	*this = src;
	return;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called." << std::endl;
	delete(this->m_brain);
	return;
}

Cat & Cat::operator=(const Cat &new_cp)
{
	std::cout << "Assignation operator Cat called." << std::endl;
	if (this != &new_cp)
	{
		this->setType(new_cp.getType());
		if (this->m_brain)
			delete(this->m_brain);
		this->m_brain = new Brain(*new_cp.m_brain);

	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Sound from Cat" << std::endl;
	return;
}

std::string Cat::getIdea(int i) const
{
	return (this->m_brain->getIdeas(i));
}