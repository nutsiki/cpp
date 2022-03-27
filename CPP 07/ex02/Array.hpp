//
// Created by Nutsiki on 22/03/2022.
//

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
template<typename T>
class Array
{
private:
	unsigned int m_n;
	T *m_array;
public:
	Array<T>(void): m_n(0), m_array(0)
	{
		std::cout << "Default constructor Array called." << std::endl;
		return;
	};
	Array<T>(unsigned int n): m_n(n), m_array(new T[n]())
	{
		std::cout << "Parametric constructor Array called." << std::endl;
		return;
	};

	Array<T>(Array const &instance): m_n(instance.size()), m_array(new T[this->m_n]())
	{
		*this = instance;
		std::cout << "Copy constructor called" << std::endl;
	};

	~Array<T>(void)
	{
		if(this->m_array)
			delete[] this->m_array;
		std::cout << "Destructor Array called." << std::endl;
		return;
	}

	T &operator[](unsigned int index) const
	{
		if ((index < 0) || (index >= this->m_n))
			throw OutOfRangeException();
		return (m_array[index]);
	}

	Array<T> &operator=(Array<T> const &new_cp)
	{
		try
		{
			for(unsigned int i = 0; i < new_cp.size(); i++)
			{
				if (i >= this->m_n)
					throw OutOfRangeException();
				this->m_array[i] = new_cp.m_array[i];
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "Assignation operator called" << std::endl;
		return (*this);
	}
	unsigned int size(void) const
	{
		return (m_n);
	}

	class OutOfRangeException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("out of range");
		}
	};
};
#endif //ARRAY_HPP
