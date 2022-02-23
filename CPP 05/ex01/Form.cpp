//
// Created by Mohamed Akoudad on 23/02/2022.
//

#include "Form.hpp"

Form::Form()
{
	std::cout << "Default constructor Form called." << std::endl;
	return;
}

Form::Form(std::string name, int grade)
{
	std::cout << "Parametric constructor Form called." << std::endl;
	return;
}

Form::~Form()
{
	std::cout << "Destructor Form called." << std::endl;
	return;
}

std::string Bureaucrat::getName() const
{
	return (this->m_name);
}

int Bureaucrat::getGrade() const
{
	return (this->m_grade);
}

Form &Form::operator=(const Form &new_cp)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &new_cp)
		this->m_grade = new_cp.m_grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &in)
{
	out << in.getName() << ", Form grade " << in.getGrade() << std::endl;
	return (out);
}

