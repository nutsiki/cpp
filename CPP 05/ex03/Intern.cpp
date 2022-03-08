//
// Created by Nutsiki on 08/03/2022.
//

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
	std::cout << "Parametric constructor Intern called." << std::endl;
	return;
}

Intern::~Intern()
{
	std::cout << "Destructor Intern called." << std::endl;
	return;
}

Intern::Intern(const Intern &src)
{
	std::cout << "Copy constructor Intern called." << std::endl;
	*this = src;
	return;
}

Intern & Intern::operator=(const Intern &new_cp)
{
	std::cout << "Assignation operator called" << std::endl;
	(void)new_cp;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string namesArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	Form	*(Intern::*createForm[3])(std::string target) = {	&Intern::m_createShrubberyForm,
				&Intern::m_createRobotomyForm,
				&Intern::m_createPresidentialForm};

	for(int i = 0; i < 3; i++)
	{
		if(name == namesArray[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*createForm[i])(target));
		}
	}
	std::cout << name << " is not a valid form." << std::endl;
	return (NULL);
}

Form *Intern::m_createPresidentialForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::m_createRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::m_createShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}
