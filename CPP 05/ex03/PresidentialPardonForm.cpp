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

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src), m_target(src.m_target)
{
	std::cout << "Copy constructor PresidentialPardonForm called." << std::endl;
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &new_cp)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &new_cp)
		Form::operator=(new_cp);
	return(*this);
}

bool PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->getSigned() == false)
		throw(PresidentialPardonForm::FormNotSignedException());
	else if (this->getGradeToExec() < executor.getGrade())
		throw(PresidentialPardonForm::GradeTooLowException());
	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return (true);
}