//
// Created by Mohamed Akoudad on 23/02/2022.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_name("NONAME"), m_grade(150)
{
	std::cout << "Default constructor Bureaucrat called." << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name)
{
	std::cout << "Parametric constructor Bureaucrat called." << std::endl;
	try
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

	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat called." << std::endl;
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
	try
	{
		if (this->m_grade == 150)
		{
			std::cout << this->m_name << " has the lowest grade (150), he cant be degraded " << std::endl;
			throw Bureaucrat::GradeTooLowException();
		}
		else
			this->m_grade++;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return;
}


void Bureaucrat::incrementGrade()
{
	try
	{
		if (this->m_grade == 1)
		{
			std::cout << this->m_name << " has the highest grade (1), he cant be upgraded " << std::endl;
			throw Bureaucrat::GradeTooHighException();
		}
		else
			this->m_grade--;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
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

