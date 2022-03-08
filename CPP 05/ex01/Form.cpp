//
// Created by Mohamed Akoudad on 23/02/2022.
//

#include "Form.hpp"

Form::Form() : m_name("NONAME"), m_grade_toSign(150), m_grade_toExec(150), m_signed(false)
{
	std::cout << "Default constructor Form called." << std::endl;
	return;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : m_name(name), m_grade_toSign(gradeToSign), m_grade_toExec(gradeToExec), m_signed(false)
{

	if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
	std::cout << "Parametric constructor Form called." << std::endl;
	return;
}

Form::~Form()
{
	std::cout << "Destructor Form called." << std::endl;
	return;
}

Form::Form(const Form &src): m_name(src.getName()), m_grade_toSign(src.getGradeToSign()), m_grade_toExec(src.getGradeToExec()), m_signed(src.getSigned())
{
	std::cout << "Copy constructor Form called." << std::endl;
	*this = src;
	return;
}

std::string Form::getName() const
{
	return (this->m_name);
}

int Form::getGradeToExec() const
{
	return (this->m_grade_toExec);
}

int Form::getGradeToSign() const
{
	return (this->m_grade_toSign);
}

bool Form::getSigned() const
{
	return (this->m_signed);
}

int Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->m_signed == true)
	{
		std::cout << "The form : " << this->m_name << " is already signed." << std::endl;
		return(2);
	}
	if (bureaucrat.getGrade() > this->getGradeToSign())
	{
		std::cout << "Form " << this->m_name << " cant get signed by " << bureaucrat.getName() << std::endl;
		throw Form::GradeTooLowException();
		return (1);
	}
	std::cout << "Form " << this->m_name << " got signed by " << bureaucrat.getName() << std::endl;
	this->m_signed = true;
	return (0);
}
Form &Form::operator=(const Form &new_cp)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &new_cp)
		this->m_signed = new_cp.m_signed;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &in)
{
	out	<< in.getName() << " Form. Grade to sign: " << in.getGradeToSign()
		<< ". Grade to execute: " << in.getGradeToExec() << " Is signed: ";
	if (in.getSigned())
		out << "Yes." << std::endl;
	else
		out << "No." << std::endl;
	return (out);
}

