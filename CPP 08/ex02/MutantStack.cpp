//
// Created by Nutsiki on 29/03/2022.
//

#include "MutantStack.hpp"

Span::Span() : m_n(0)
{
	std::cout << "Default constructor Span called." << std::endl;
	return;
}

Span::Span(unsigned int N) : m_n(N)
{
	std::cout << "Parametric constructor Span called." << std::endl;
	return;
}

Span::Span(const MutantStack &src)
{
	*this = src;
	std::cout << "Copy constructor MutantStack called." << std::endl;
	return;
}

MutantStack::~MutantStack()
{
	std::cout << "Destructor MutantStack called." << std::endl;
	return;
}

MutantStack & MutantStack::operator=(const MutantStack &new_cp)
{
	if (this != &new_cp)
	{
		this->m_n = new_cp.m_n;
		this->m_array = new_cp.m_array;
	}
	return (*this);
}