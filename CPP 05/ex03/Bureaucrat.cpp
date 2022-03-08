//
// Created by Mohamed Akoudad on 23/02/2022.
//

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

Bureaucrat::Bureaucrat() : m_name("NONAME"), m_grade(150)
{
	std::cout << "Default constructor Bureaucrat called." << std::endl;
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
	std::cout << "Parametric constructor Bureaucrat called." << std::endl;
	return;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat called." << std::endl;
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

void Bureaucrat::signForm(Form &form)
{
	int i = 0;
	try
	{
		i = form.beSigned(*this);
	}
	catch (...)
	{
		i = 1;
	}
	if (i == 1)
	{
		std::cout << this->m_name << " couldn't sign " << form.getName() << " because Grade too low." << std::endl;
		throw Form::GradeTooLowException();
	}
	else if (i == 2)
		std::cout << this->m_name << " couldn't sign " << form.getName() << " because he is already signed." << std::endl;
	else
		std::cout	<< this->m_name << " signs " << form.getName() << std::endl;
	return;
}

void Bureaucrat::executeForm(const Form &form)
{
	bool x = false;
	try
	{
		x = form.execute(*this);
	}
	catch (std::exception & e)
	{
		std::cerr << this->m_name << " cant execute " << form.getName() << " because " << e.what() << std::endl;
	}
	if (x)
		std::cout << this->m_name << " execute " << form.getName() << std::endl;
	else if (form.getSigned() == false)
		throw(PresidentialPardonForm::FormNotSignedException());
	else
		throw(PresidentialPardonForm::GradeTooLowException());
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

