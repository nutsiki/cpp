//
// Created by Mohamed Akoudad on 23/02/2022.
//

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>


class Bureaucrat
{
private:
	std::string const m_name;
	int	m_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(const Bureaucrat &new_cp);
	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();

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

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &in);

#endif //BUREAUCRAT_HPP
