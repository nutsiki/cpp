//
// Created by Nutsiki on 22/03/2022.
//

#include "iter.hpp"

int main()
{
	int array_int[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::string array_str[10] = {"zero", "un", "deux", "trois", "quatre", "cinq", "six", "sept", "huit", "neuf"};
	float array_float[10] = {0.1, 1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.00};
	char const array_char[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	iter(array_int, 10, print_value);
	std::cout << std::endl;
	iter(array_str, 10, print_value);
	std::cout << std::endl;
	iter(array_float, 10, print_value);
	std::cout << std::endl;
	iter(array_char, 10, print_value);
	return (0);
}