#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <set>
#include <iterator>

class Span {
private:
	unsigned int _n;
	std::multiset<int> mSet;
public:
	Span(unsigned int n);
	Span(const Span& copy);
	Span	&operator=(const Span& other);
	virtual ~Span();

	void	addNumber(int n);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	
	void	print();

	class OverflowException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class SpanException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};



#endif