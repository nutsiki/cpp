//
// Created by Mohamed Akoudad on 26/02/2022.
//

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 25, 5), m_target(target)
{
	std::cout << "Parametric constructor RobotomyRequestForm called." << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor RobotomyRequestForm called." << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src), m_target(src.m_target)
{
	std::cout << "Copy constructor RobotomyRequestForm called." << std::endl;
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &new_cp)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &new_cp)
		Form::operator=(new_cp);
	return(*this);
}

bool RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->getSigned() == false)
		throw(RobotomyRequestForm::FormNotSignedException());
	else if (this->getGradeToExec() < executor.getGrade())
		throw(RobotomyRequestForm::GradeTooLowException());
	std::cout << "BRRRrrRRRrRRr ** Bruit de Perceuse ** BRErrrrrrrbBBRrr" << std::endl;
	if (rand()% 2 == 1)
		std::cout << m_target << " has successfully been Robotomized" << std::endl;
	else
		std::cout << m_target << " has unfortunately not been Robotomized" << std::endl;
	return (true);
}