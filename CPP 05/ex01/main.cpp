#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat momo = Bureaucrat("momo", 560);
	Bureaucrat nathan = Bureaucrat();
	Bureaucrat gauthier = Bureaucrat("gauthier",-900);
	std::cout << momo << std::endl;
	std::cout << nathan << std::endl;
	std::cout << gauthier << std::endl;
	momo.decrementGrade();
	std::cout << momo << std::endl;
	momo.incrementGrade();
	while (momo.getGrade() > 1)
	{
		momo.incrementGrade();
		std::cout << momo << std::endl;
	}
	momo.incrementGrade();
	std::cout << momo << std::endl;

	return (0);
}