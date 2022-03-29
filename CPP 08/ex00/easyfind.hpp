//
// Created by Mohamed Akoudad on 27/03/2022.
//

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

class NotFoundException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return (" not found ");
	}
};

template<typename T>
int &easyfind(T &containerOfInt, int intToFind)
{
	typename T::iterator it;
	it = std::find(containerOfInt.begin(), containerOfInt.end(), intToFind);
	if (it == containerOfInt.end())
		throw NotFoundException();
	return (*it);
}

#endif //EASYFIND_HPP
