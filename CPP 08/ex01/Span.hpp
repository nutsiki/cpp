//
// Created by Mohamed Akoudad on 28/03/2022.
//

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>


class Span
{
private:
	unsigned int m_n;
	std::vector<int> m_array;
public:
	Span();
	Span(unsigned int N);
	~Span();
	Span(Span const &src);
	Span &operator=(const Span &new_cp);
	void addNumber(int nb);
	void addMoreNumber(int i, int j);
	void printArray();
	unsigned int shortestSpan();
	unsigned int longestSpan();
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
