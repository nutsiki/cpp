//
// Created by Mohamed Akoudad on 23/02/2022.
//

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{

private:
	std::string const	m_name;
	int const	m_grade_toSign;
	int const	m_grade_toExec;
	bool m_signed;

public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExec);
	virtual ~Form();
	Form(Form const &src);
	Form &operator=(const Form &new_cp);
	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
	bool getSigned() const;
	int beSigned(Bureaucrat const &bureaucrat);
	virtual bool	execute(Bureaucrat const &executor) const = 0;
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Grade too high.");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Grade too low.");
		}
	};
	class FormNotSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Form not signed.");
		}
	};
};

std::ostream &operator<<(std::ostream &out, const Form &in);


#endif //FORM_HPP
