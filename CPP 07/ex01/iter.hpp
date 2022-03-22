//
// Created by Nutsiki on 22/03/2022.
//

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void	iter(T *address_array, size_t length_array, void function(T &value_array))
{
	for (size_t i = 0; i < length_array; ++i)
		function(address_array[i]);
	return;
}

template<typename T>
void	iter(T const *address_array, size_t length_array, void function(T const &value_array))
{
	for (size_t i = 0; i < length_array; ++i)
		function(address_array[i]);
	return;
}

template<typename T>
void print_value(T const &value_array)
{
	std::cout << value_array << std::endl;
	return;
}
#endif //ITER_HPP
