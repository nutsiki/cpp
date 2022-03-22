//
// Created by Nutsiki on 22/03/2022.
//

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap (T &x, T &y)
{
	T z;
	z = x;
	x = y;
	y = z;
	return ;
}

template <typename T>
T min(T const &x, T const &y)
{
	return (x >= y) ? y : x;
}

template <typename T>
T max(T const &x, T const &y)
{
	return (x <= y) ? y : x;
}

#endif //WHATEVER_HPP
