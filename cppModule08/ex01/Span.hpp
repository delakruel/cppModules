#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

class Span {
private:
	unsigned int _n;
	std::vector<int> mSet;
public:
	Span(unsigned int n);
	Span(const Span& copy);
	Span	&operator=(const Span& other);
	virtual ~Span();

	void	addNumber(int n);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
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