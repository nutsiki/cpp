//
// Created by Nutsiki on 11/03/2022.
//

#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>
#include <stdlib.h>
#include <errno.h>
#include <cfloat>
#include <math.h>

class Conversion
{
private:
	char *m_str;
	int	m_int;
	float m_float;
	double m_double;
	char m_char;
public:
	Conversion();
	Conversion(char *str);
	~Conversion();
	Conversion(Conversion const &src);
	Conversion &operator=(const Conversion &new_cp);
	bool	isChar(char *str);
	bool	isInt(char *str);
	bool	isFloat(char *str);
	bool	isDouble(char *str);
	bool	isLiteralF(char *str);
	bool	isLiteralD(char *str);
	void	toChar();
	void	toInt();
	void	toFloat();
	void	toDouble();
	void	toLiteralF();
	void	toLiteralD();
	void 	DetectType();
	void 	Display();
	class Impossible : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("impossible");
		}
	};
	class NonDisplayable : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Non Displayable");
		}
	};
	class NoType : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("enter a value thats either a char, an int, a float or a double.");
		}
	};
};


#endif //CONVERSION_HPP
