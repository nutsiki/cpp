//
// Created by Nutsiki on 06/02/2022.
//

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor Dog called." << std::endl;
	this->m_type = "Dog";
	this->m_brain = new Brain;
	return;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Copy constructor Dog called." << std::endl;
	this->m_brain = new Brain;
	*this = src;
	return;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called." << std::endl;
	delete(this->m_brain);
	return;
}

Dog & Dog::operator=(const Dog &new_cp)
{
	std::cout << "Assignation operator Dog called." << std::endl;
	if (this != &new_cp)
	{
		this->setType(new_cp.getType());
		if (this->m_brain)
			delete(this->m_brain);
		this->m_brain = new Brain(*new_cp.m_brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Sound from Dog" << std::endl;
	return;
}

std::string Dog::getIdea(int i) const
{
	return (this->m_brain->getIdeas(i));
}