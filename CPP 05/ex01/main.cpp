#include "Bureaucrat.hpp"

//int main(void)
//{
//	Bureaucrat momo("momo", 560);
//	Bureaucrat nathan = Bureaucrat();
//	Bureaucrat gauthier = Bureaucrat("gauthier",-900);
//	Form lolo = Form("Lolo", 200, -10);
//	Form lili = Form("Lili", -2, 180);
//	Form lulu = Form("Lulu", 10, 100);
//	Form lala = Form(lulu);
//	std::cout << momo << std::endl;
//	lulu.beSigned(momo);
//	lulu.beSigned(gauthier);
//	std::cout << nathan << std::endl;
//	std::cout << gauthier << std::endl;
//	momo.decrementGrade();
//	std::cout << momo << std::endl;
//	momo.incrementGrade();
//	momo.incrementGrade();
//	nathan.signForm(lolo);
//	nathan.signForm(lala);
//	std::cout << momo << std::endl;
//	std::cout << lolo << std::endl;
//	std::cout << lulu << std::endl;
//	std::cout << lala << std::endl;
//
//
//	return (0);
//}
//int main()
//{
//	Bureaucrat* bureaucrat = new Bureaucrat("Bob", 2);
//	Bureaucrat* stagiaire = new Bureaucrat("Cafe", 149);
//
//	// Test --
//	try
//	{
//		std::cout << *bureaucrat;
//		bureaucrat->incrementGrade();
//		std::cout << bureaucrat->getName() << " upgraded ! Felicitations! " << std::endl;
//		std::cout << *bureaucrat;
//		bureaucrat->incrementGrade();
//		std::cerr << "[+][1] Exception does'nt work nicely. " << std::endl;
//	}
//	catch (std::exception & e)
//	{
//		std::cerr << "[1] Exception : " << e.what() << std::endl;
//	}
//
//	// Test ++
//	try
//	{
//		std::cout << *stagiaire;
//		stagiaire->decrementGrade();
//		std::cout << stagiaire->getName() << " downgraded ! That's suck! " << std::endl;
//		std::cout << *stagiaire;
//		stagiaire->decrementGrade();
//		std::cerr << "[+][2] Exception does'nt work nicely. " << std::endl;
//	}
//	catch (std::exception & e)
//	{
//		std::cerr << "[2] Exception : " << e.what() << std::endl;
//	}
//
//	Bureaucrat* toHigh;
//	Bureaucrat* toLow;
//
//	// Test ToHigh
//	try
//	{
//		toHigh = new Bureaucrat("ToHigh", 0);
//		delete toHigh;
//		std::cerr << "[+][3] Exception does'nt work nicely. " << std::endl;
//	}
//	catch (std::exception & e)
//	{
//		std::cerr << "[3] Exception : " << e.what() << std::endl;
//	}
//	try
//	{
//		toLow = new Bureaucrat("ToLow", 420);
//		delete toLow;
//		std::cerr << "[+][4] Exception does'nt work nicely. " << std::endl;
//	}
//	catch (std::exception & e)
//	{
//		std::cerr << "[4] Exception : " << e.what() << std::endl;
//	}
//	delete bureaucrat;
//	delete stagiaire;
//	return (0);
//}
static void sendText(std::string const txt)
{
	std::cout << txt << std::endl;
	return ;
}

int main()
{
	//Test all constructors
	sendText("Testing all the constructors for Bureaucrats");
	Bureaucrat joel("Joel", 150);
	Bureaucrat marcel("Marcel", 1);
	Bureaucrat basic;
	Bureaucrat joel_copy(joel);
	sendText("\n");

	//Test constructors Form
	sendText("Testing all the constructors for Forms");
	Form A;
	Form B("Form B", 150, 150);
	Form B_cpy(B);
	Form C("Form C", 1, 1);
	Form C_cpy(C);
	sendText("\n");

	//test all overloads
	sendText("Testing all the overloads on all the bureacrat and form created");
	std::cout << joel << std::endl;
	std::cout << marcel << std::endl;
	std::cout << basic << std::endl;
	std::cout << joel_copy << std::endl;
	joel_copy = marcel;
	std::cout << "After egaling joel to marcel : " << joel_copy << std::endl;
	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << B_cpy << std::endl;
	std::cout << C << std::endl;
	B_cpy = C;
	std::cout << "After egaling B_cpy to C : " << B_cpy << std::endl;
	sendText("\n");

	//test exeptions
	sendText("Testing increase and decrease and seeing if exceptions works");
	try
	{
		joel.decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << joel << std::endl;
	joel.incrementGrade();
	std::cout << joel << std::endl;
	try
	{
		marcel.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << marcel << std::endl;
	marcel.decrementGrade();
	std::cout << marcel << std::endl;
	sendText("\n");

	//test constructor with wrong grades
	sendText("Testing exeption on the creation of a bureaucrat");
	try
	{
		Bureaucrat Kokori("Kokori", 1444);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Kakari("Kakari", -1444);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	//test sign form with good and wrong grades
	sendText("test sign form with good and wrong grades and sign form already signed");
	try
	{
		C.beSigned(marcel);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	B.beSigned(joel);
	B_cpy = C;
	std::cout << "After egaling B_cpy to C : " << B_cpy << std::endl;
	try
	{

		marcel.signForm(C_cpy);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	joel.signForm(B_cpy);
	joel.signForm(B_cpy);
	return (0);
}