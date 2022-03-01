//
// Created by Mohamed Akoudad on 26/02/2022.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialForm", 25, 5), m_target(target)
{
	std::cout << "Parametric constructor PresidentialPardonForm called." << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor PresidentialPardonForm called." << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	std::cout << "Copy constructor PresidentialPardonForm called." << std::endl;
	*this = src;
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &new_cp)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &new_cp)
		this->m_target = new_cp.m_target;
	return(*this);
}

bool PresidentialPardonForm::execute(const Bureaucrat &executor) const
{

	return (true);
}