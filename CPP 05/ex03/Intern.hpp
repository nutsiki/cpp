//
// Created by Nutsiki on 08/03/2022.
//

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"


class Intern
{
private:
	Form	*m_createPresidentialForm(std::string target);
	Form	*m_createRobotomyForm(std::string target);
	Form	*m_createShrubberyForm(std::string target);
public:
	Intern();
	Intern(Intern const &src);
	~Intern();
	Intern &operator=(Intern const &new_cp);
	Form *makeForm(std::string type, std::string target);
	Form* createPresidential(std::string formTarget);
	Form* createRobotomy(std::string formTarget);
	Form* createShrubbery(std::string formTarget);
};


#endif //INTERN_HPP
