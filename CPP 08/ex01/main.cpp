//
// Created by Nutsiki on 29/03/2022.
//

#include "Span.hpp"

#define SIZE 10
#include <stdlib.h>

int main()
{
	Span def;
	Span span(SIZE);
	Span span_huge(1000);
	Span span_cpy(span);
	Span span_empty(10);

	std::cout << "span : ";
	span.printArray();
	std::cout << "span_huge : ";
	span_huge.printArray();
	std::cout << "span_empty : ";
	span_cpy.printArray();
	srand(time(NULL));
	std::cout << "Adding mumbers to a span :" << std::endl;
	try
	{
		for (int i = 0; i < SIZE; i++)
			span.addNumber(rand() % 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	span.printArray();
	std::cout << std::endl << "Trying to add too much number to a span :" << std::endl;
	try
	{
		for (int i = 0; i < SIZE; i++)
			span.addNumber(i);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	span.printArray();
	std::cout << "Filling a huge span to see if it works :" << std::endl;
	try
	{
		for (int i = 0; i < 100000; i++)
			span_huge.addNumber(rand() % 1000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	span_huge.printArray();
	Span span_huge_cpy(span_huge);
	span_huge_cpy.printArray();
	try
	{
		span_huge_cpy.addNumber(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	span_huge_cpy.printArray();
	Span span_100(100);
	try
	{
		span_100.addMoreNumber(110, 109);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	span_100.printArray();
//	span_empty.addNumber(0);
//	span_empty.addNumber(0);
//	span_empty.addNumber(78);
//	span_empty.addNumber(45);
//	span_empty.addNumber(40);
	span_empty.printArray();
	try{ std::cout << span_empty.shortestSpan() << std::endl; }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try{ std::cout << span_empty.longestSpan() << std::endl; }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
