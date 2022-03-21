//
// Created by Nutsiki on 11/03/2022.
//

#include "Conversion.hpp"

Conversion::Conversion()
{
	std::cout << "Default constructor Conversion called." << std::endl;
	return;
}

Conversion::Conversion(char *str) : m_str(str)
{
	std::cout << "Parametric constructor Conversion called." << std::endl;
	return;
}

Conversion::~Conversion()
{
	std::cout << "Destructor Conversion called." << std::endl;
	return;
}

Conversion::Conversion(const Conversion &src)
{
	*this = src;
	std::cout << "Copy constructor Conversion called." << std::endl;
	return;
}

Conversion & Conversion::operator=(const Conversion &new_cp)
{
	if (this != &new_cp)
		this->m_str = new_cp.m_str;
	std::cout << "Assignation operator Conversion called." << std::endl;
	return (*this);
}

void Conversion::DetectType()
{
	if (isChar(this->m_str))
		toChar();
	else if (isInt(this->m_str))
		toInt();
	else if (isFloat(this->m_str))
		toFloat();
	else if (isDouble(this->m_str))
		toDouble();
	else if (isLiteralF(this->m_str))
		toLiteralF();
	else if (isLiteralD(this->m_str))
		toLiteralD();
	else
		throw Conversion::NoType();
	return;
}

bool Conversion::isChar(char *str)
{
	if ((str[0] >= '!' && str[0] < '0') && str[1] == '\0')
		return (true);
	if ((str[0] > '9' && str[0] <= '~') && str[1] == '\0')
		return (true);
	return (false);
}

bool Conversion::isInt(char *str)
{
	int i = 0;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

bool Conversion::isFloat(char *str)
{
	int i = 0;
	bool point = false;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.' && str[i] != 'f')
			return (false);
		if (str[i] == '.' && point == true)
			return (false);
		if (str[i] == 'f' && (str[i + 1] != '\0' || !point))
			return (false);
		if (str[i] == '.')
			point = true;
		i++;
	}
	if (str[i - 1] == 'f')
		return (true);
	return (false);
}

bool Conversion::isDouble(char *str)
{
	int i = 0;
	bool point = false;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
			return (false);
		if (str[i] == '.' && point == true)
			return (false);
		if (str[i] == '.')
			point = true;
		i++;
	}
	return (true);
}

bool Conversion::isLiteralF(char *str)
{
	std::string arg = str;
	if (arg == "-inff" || arg == "+inff" || arg == "nanf")
		return (true);
	return (false);
}

bool Conversion::isLiteralD(char *str)
{
	std::string arg = str;
	if (arg == "-inf" || arg == "+inf" || arg == "nan")
		return (true);
	return (false);
}

void Conversion::toChar()
{
	this->m_char = this->m_str[0];
	this->m_int = static_cast<int>(this->m_char);
	this->m_float = static_cast<float>(this->m_char);
	this->m_double = static_cast<double>(this->m_char);
	std::cout << "char: '" << this->m_char << "'" << std::endl;
	std::cout << "int: " << this->m_int << std::endl;
	std::cout << "float: " << this->m_float << ".0f" << std::endl;
	std::cout << "double: " << this->m_double << ".0" << std::endl;
}

void Conversion::toInt()
{
	double	nb;
	int err;
	errno = 0;

	nb = strtod(this->m_str, NULL);
	err = errno;
	this->m_int = atoi(this->m_str);
	this->m_char = static_cast<char>(this->m_int);
	this->m_float = static_cast<float>(this->m_int);
	this->m_double = static_cast<double>(this->m_int);
	std::cout << "char: ";
	try
	{
		if (nb < 0 || nb > 127 || err == ERANGE)
			throw(Conversion::Impossible());
		if (nb < 32 || nb > 126)
			throw(Conversion::NonDisplayable());
		std::cout << "'" << this->m_char << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "int: ";
	try
	{
		if (nb > 2147483647 || nb < -2147483648 || errno == ERANGE)
			throw(Conversion::Impossible());
		std::cout << this->m_int << std::endl;
		std::cout << "float: " << this->m_float << ".0f" << std::endl;
		std::cout << "double: " << this->m_double << ".0" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	return;
}

void Conversion::toFloat()
{
	double	nb;
	int err;
	errno = 0;

	nb = strtod(this->m_str, NULL);
	err = errno;
	this->m_float = atof(this->m_str);
	this->m_int = static_cast<int>(this->m_float);
	this->m_char = static_cast<char>(this->m_float);
	this->m_double = static_cast<double>(this->m_float);
	std::cout << "char: ";
	try
	{
		if (nb < 0 || nb > 127 || err == ERANGE)
			throw(Conversion::Impossible());
		if (nb < 32 || nb > 126)
			throw(Conversion::NonDisplayable());
		std::cout << "'" << this->m_char << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "int: ";
	try
	{
		if (nb > 2147483647 || nb < -2147483648 || err == ERANGE)
			throw(Conversion::Impossible());
		std::cout << this->m_int << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "float: ";
	try
	{
		if (nb > FLT_MAX || nb < -FLT_MAX || err == ERANGE)
			throw(Conversion::Impossible());
		if (fmodf(this->m_float, 1.0) == 0.0)
		{
			std::cout << this->m_float << ".0f" << std::endl;
			std::cout << "double: " << this->m_double << ".0" << std::endl;
		}
		else
		{
			std::cout << this->m_float << "f" << std::endl;
			std::cout << "double: " << this->m_double << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	return;
}

void Conversion::toDouble()
{
	errno = 0;
	int err;

	this->m_double = strtod(this->m_str, NULL);
	err = errno;
	this->m_float = static_cast<float>(this->m_double);
	this->m_int = static_cast<int>(this->m_double);
	this->m_char = static_cast<char>(this->m_double);
	std::cout << "char: ";
	try
	{
		if (this->m_double < 0 || this->m_double > 127 || err == ERANGE)
			throw(Conversion::Impossible());
		if (this->m_double < 32 || this->m_double > 126)
			throw(Conversion::NonDisplayable());
		std::cout << "'" << this->m_char << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "int: ";
	try
	{
		if (this->m_double > 2147483647 || this->m_double < -2147483648 || err == ERANGE)
			throw(Conversion::Impossible());
		std::cout << this->m_int << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "float: ";
	try
	{
		if (this->m_double > FLT_MAX || this->m_double < -FLT_MAX || err == ERANGE)
			throw(Conversion::Impossible());
		if (fmodf(this->m_float, 1.0) == 0.0)
			std::cout << this->m_float << ".0f" << std::endl;
		else
			std::cout << this->m_float << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "double: ";
	try
	{
		if (this->m_double > DBL_MAX || this->m_double < -DBL_MAX || err == ERANGE)
			throw(Conversion::Impossible());
		if (fmod(this->m_double, 1.0) == 0.0)
			std::cout << this->m_double << ".0" << std::endl;
		else
			std::cout << this->m_double << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return;
}

void Conversion::toLiteralF()
{
	std::string str = this->m_str;
	unsigned int size = str.size();
	str.resize(size - 1);
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << this->m_str << std::endl;
	std::cout << "double: " << str << std::endl;
	return;
}

void Conversion::toLiteralD()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << this->m_str << "f" << std::endl;
	std::cout << "double: " << this->m_str << std::endl;
	return;
}