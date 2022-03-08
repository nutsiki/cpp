//
// Created by Mohamed Akoudad on 26/02/2022.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string m_target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &new_cp);
	bool execute(Bureaucrat const &executor) const;
};

#endif //ROBOTOMYREQUESTFORM_HPP