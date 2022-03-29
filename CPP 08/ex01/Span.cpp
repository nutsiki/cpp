//
// Created by Mohamed Akoudad on 28/03/2022.
//

#include "Span.hpp"

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

Span::Span(const Span &src)
{
	*this = src;
	std::cout << "Copy constructor Span called." << std::endl;
	return;
}

Span::~Span()
{
	std::cout << "Destructor Span called." << std::endl;
	return;
}

Span & Span::operator=(const Span &new_cp)
{
	if (this != &new_cp)
	{
		this->m_n = new_cp.m_n;
		this->m_array = new_cp.m_array;
	}
	return (*this);
}

void	Span::addNumber(int nb)
{

	if (this->m_array.size() == this->m_n)
		throw TooMuchNumberException();
	this->m_array.push_back(nb);
	return;
}

void Span::addMoreNumber(int i, int j)
{
	while (i < j)
	{
		addNumber(i);
		i++;
	}
	while (j < i)
	{
		addNumber(j);
		j++;
	}
	if (i == j)
		addNumber(i);
	return;
}

void Span::printArray()
{
	if (this->m_array.size() <= 0)
	{
		std::cout << "Array empty" << std::endl;
		return ;
	}
	std::vector<int>::iterator it = this->m_array.begin();
	std::cout << "( ";
	for (; it + 1 != this->m_array.end(); it++)
	{
		std::cout << *it << ", ";
	}
	std::cout << *it << " )" << std::endl;
	return ;
}

unsigned int Span::shortestSpan()
{
	if (this->m_array.size() <= 1)
		throw NoDistanceException();
	unsigned int ret = 4294967295;
	std::vector<int> tmp(this->m_array);
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it = tmp.begin();
	std::vector<int>::iterator it2 = tmp.begin();
	it2++;
	while (it2 != tmp.end())
	{
		if (std::abs(*it - *it2) < ret)
			ret = std::abs(*it - *it2);
		it2++;
		it++;
	}
	return (ret);
}

unsigned int Span::longestSpan()
{
	if (this->m_array.size() <= 1)
		throw NoDistanceException();
	return (*max_element(this->m_array.begin(), this->m_array.end()) - *min_element(this->m_array.begin(), this->m_array.end()));
}