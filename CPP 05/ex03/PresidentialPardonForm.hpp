//
// Created by Mohamed Akoudad on 26/02/2022.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string m_target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &new_cp);
	bool execute(Bureaucrat const &executor) const;
};

#endif //PRESIDENTIALPARDONFORM_HPP
