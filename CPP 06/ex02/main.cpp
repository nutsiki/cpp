//
// Created by Mohamed Akoudad on 25/03/2022.
//

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	Base *p = NULL;
	int	random = rand() % 3;

	std::srand((unsigned int)time(NULL));
	if (random == 0)
		p = new A();
	else if (random == 1)
		p = new B();
	else if (random == 2)
		p = new C();
	return (p);
}

void identify(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	return;
}

void identify(Base & p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " Not A" << std::endl;
	}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " Not B" << std::endl;
	}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " Not C" << std::endl;
	}
	return;
}
int main ()
{
	Base *base_ptr = generate();

	identify(base_ptr);
	identify(*base_ptr);
	delete base_ptr;
	return (0);
}