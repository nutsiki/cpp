//
// Created by Mohamed Akoudad on 28/03/2022.
//

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>


class Span
{
private:
	unsigned int m_N;
public:
	Span();
	Span(unsigned int N);
	~Span();
	Span(Span const &src);
	Span &operator=(const Span &new_cp);
	addNumber();
	shortestSpan();
	longestSpan();
	addMoreNumber();
	class TooMuchNumberException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Too much number");
		}
	};
	class NoDistanceException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("No distance, Span have 0 or 1 element");
		}
	};
};


#endif //SPAN_HPP
