#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void) {

	std::cout << "*------------------Testing the ShrubberyCreationForm------------------*" << std::endl;
	Bureaucrat bureaucrat0("nulos", 150);
	Bureaucrat bureaucrat1("haha", 1);
	Bureaucrat bureaucrat2("braiiz", 10);
	ShrubberyCreationForm scf("Home");
	std::cout << "name: " << scf.getName() << std::endl;
	std::cout << "GradeToExec: " << scf.getGradeToExec() << std::endl;
	std::cout << "GradeToSign: " << scf.getGradeToSign() << std::endl;
	std::cout << std::endl;

	try
	{
		scf.execute(bureaucrat1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		scf.beSigned(bureaucrat2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		scf.execute(bureaucrat2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		bureaucrat0.executeForm(scf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		bureaucrat1.executeForm(scf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "*------------------Testing the RobotomyRequestForm------------------*" << std::endl;
	RobotomyRequestForm rrf("homeAgain");
	std::cout << "name: " << rrf.getName() << std::endl;
	std::cout << "GradeToExec: " << rrf.getGradeToExec() << std::endl;
	std::cout << "GradeToSign: " << rrf.getGradeToSign() << std::endl;
	std::cout << std::endl;

	try
	{
		rrf.execute(bureaucrat1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		rrf.beSigned(bureaucrat2);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try
	{
		rrf.execute(bureaucrat2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		bureaucrat0.executeForm(rrf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		bureaucrat1.executeForm(rrf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "*------------------Testing the PresidentialPardonForm------------------*" << std::endl;
	Bureaucrat bureaucrat3("haha", 6);
	Bureaucrat bureaucrat4("hoho", 4);
	PresidentialPardonForm ppf("homeAgain");
	std::cout << "name: " << ppf.getName() << std::endl;
	std::cout << "GradeToExec: " << ppf.getGradeToExec() << std::endl;
	std::cout << "GradeToSign: " << ppf.getGradeToSign() << std::endl;
	std::cout << std::endl;

	try
	{
		ppf.execute(bureaucrat3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ppf.beSigned(bureaucrat3);
	try
	{
		ppf.execute(bureaucrat4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		bureaucrat3.executeForm(ppf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Intern someRandomIntern;
	Form* rrrf;
	rrrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrrf << std::endl;
	delete rrrf;
	return (0);
}