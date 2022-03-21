//
// Created by Nutsiki on 11/03/2022.
//
#include <iostream>
#include <stdlib.h>
#include "Conversion.hpp"
int main(int argc, char **argv)
{
	std::string str;
	if (argc != 2)
	{
		std::cout << "need one argument" << std::endl;
		return (1);
	}
	str = argv[1];
	if (str.empty())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return (0);
	}
	try
	{
		Conversion value(argv[1]);
		value.DetectType();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}