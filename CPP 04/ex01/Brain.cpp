//
// Created by Nutsiki on 06/02/2022.
//

#include "Brain.hpp"

Brain::Brain(void)
{
	int i = -1;
	std::string tmp;
	while (++i < 100)
	{
		tmp = std::to_string(i);
		this->m_ideas[i] = "Idea" + tmp;
	}
	std::cout << "Default constructor Brain called." << std::endl;
	return;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Copy constructor Brain called." << std::endl;
	*this = src;
	return;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called." << std::endl;
	return;
}

Brain & Brain::operator=(const Brain &new_cp)
{
	int i = -1;
	std::cout << "Assignation operator Brain called." << std::endl;
	if (this != &new_cp)
		while (++i < 100)
			this->setIdeas(new_cp.getIdeas(i), i);
	return (*this);
}

void Brain::setIdeas(const std::string idea, int i)
{
	this->m_ideas[i] = idea;
	return;
}

std::string Brain::getIdeas(int i) const
{
	return (this->m_ideas[i]);
}