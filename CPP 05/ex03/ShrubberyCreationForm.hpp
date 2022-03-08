//
// Created by Mohamed Akoudad on 26/02/2022.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string m_target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &new_cp);
	bool execute(Bureaucrat const &executor) const;
};

#endif //SHRUBBERYCREATIONFORM_HPP
