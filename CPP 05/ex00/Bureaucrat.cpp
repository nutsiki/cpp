//
// Created by Mohamed Akoudad on 23/02/2022.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_name("NONAME"), m_grade(150)
{
	std::cout << this->m_name  << " Default constructor Bureaucrat called." << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name)
{
	if (grade < 1)
	{
		std::cout << this->m_name << " take the highest grade (1) because " << grade << " is not available." << std::endl;
		this->m_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		std::cout << this->m_name << " take the lowest grade (150) because " << grade << " is not available." << std::endl;
		this->m_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->m_grade = grade;
	std::cout << this->m_name  << " Parametric constructor Bureaucrat called." << std::endl;
	return;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->m_name <<" Destructor Bureaucrat called." << std::endl;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : m_name(src.getName())
{
	std::cout << "Copy constructor Bureaucrat called." << std::endl;
	*this = src;
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

void Bureaucrat::decrementGrade()
{

	if (this->m_grade == 150)
	{
		std::cout << this->m_name << " has the lowest grade (150), he cant be degraded " << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->m_grade++;
	return;
}


void Bureaucrat::incrementGrade()
{
	if (this->m_grade == 1)
	{
		std::cout << this->m_name << " has the highest grade (1), he cant be upgraded " << std::endl;
		throw Bureaucrat::GradeTooHighException();
	}
	else
		this->m_grade--;
	return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &new_cp)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &new_cp)
		this->m_grade = new_cp.m_grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &in)
{
	out << in.getName() << ", bureaucrat grade " << in.getGrade() << std::endl;
	return (out);
}

