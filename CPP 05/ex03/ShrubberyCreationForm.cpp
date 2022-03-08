//
// Created by Mohamed Akoudad on 26/02/2022.
//

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), m_target(target)
{
	std::cout << "Parametric constructor ShrubberyCreationForm called." << std::endl;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor ShrubberyCreationForm called." << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src), m_target(src.m_target)
{
	std::cout << "Copy constructor ShrubberyCreationForm called." << std::endl;
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &new_cp)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &new_cp)
		Form::operator=(new_cp);
	return(*this);
}

bool ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->getSigned() == false)
		throw(ShrubberyCreationForm::FormNotSignedException());
	else if (this->getGradeToExec() < executor.getGrade())
		throw(ShrubberyCreationForm::GradeTooLowException());
	std::string const filename = m_target + "_shrubbery";
	std::ofstream outfile(filename.c_str());
	outfile << "\
           ___\n\
           IOI\n\
          IOOOI\n\
        IO0O0O0OI\n\
        IO0O0O0O0I\n\
         I0O0O0OI\n\
          I0O0I\n\
           |1|\n\
           |1|\n\
           |1|\n\
           |||\n\
        &&__|__&&\n" << std::endl;
	outfile.close();
	return (true);
}