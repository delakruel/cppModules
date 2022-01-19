#include "Span.hpp"

Span::Span(unsigned int n) : _n(n) {
}

Span::Span(const Span& copy) {
	*this = copy;
}

Span	&Span::operator=(const Span& other) {
	if (this != &other) {
	}
	return (*this);
}

void	Span::addNumber(int n) {
	if (this->mSet.size() >= this->_n)
		throw OverflowException();
	this->mSet.insert(n);
};

unsigned int	Span::shortestSpan() {
	if (this->mSet.size() == 0 || this->mSet.size() == 1)
		throw SpanException();
	
	unsigned int k = static_cast<unsigned int>(*--mSet.end()) - static_cast<unsigned int>(*mSet.begin());
	std::multiset<int>::iterator iter = this->mSet.begin();
	std::multiset<int>::iterator iter2 = this->mSet.begin();
	++iter2;

	while (iter2 != this->mSet.end()) {
		if (static_cast<unsigned int>(*iter2) - static_cast<unsigned int>(*iter) < k)
			k = *iter2 - *iter;
		++iter2;
	}
	return k;
};

unsigned int		Span::longestSpan() {
	if (this->mSet.size() == 0 || this->mSet.size() == 1)
		throw SpanException();
	return (static_cast<unsigned int>(*--mSet.end()) - static_cast<unsigned int>(*mSet.begin()));
};

const char* Span::OverflowException::what() const throw() {
	return "Exception! You are trying to overflow Span!";
};

const char* Span::SpanException::what() const throw() {
	return "Exception! Not enough numbers to find span!";
};

Span::~Span() {}
