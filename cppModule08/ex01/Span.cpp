#include "Span.hpp"

Span::Span(unsigned int n) : _n(n) {
}

Span::Span(const Span& copy) {
	this->_n = copy._n;
	if (this->_n > 0) {
		std::vector<int>::const_iterator iter = copy.mSet.begin();
		while (iter != copy.mSet.end()) {
			this->mSet.push_back(*iter);
			++iter;
		}
	}
}

Span	&Span::operator=(const Span& other) {
	if (this != &other) {
		this->mSet.clear();
		this->_n = other._n;
		if (this->_n > 0) {
			std::vector<int>::const_iterator iter = other.mSet.begin();
			while (iter != other.mSet.end()) {
				this->mSet.push_back(*iter);
				++iter;
			}
		}
	}
	return (*this);
}

void	Span::addNumber(int n) {
	if (this->mSet.size() >= this->_n)
		throw OverflowException();
	this->mSet.push_back(n);
};

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (end - begin + this->mSet.size() > this->_n)
		throw OverflowException();
	this->mSet.insert(this->mSet.end(), begin, end);
}

unsigned int	Span::shortestSpan() {
	if (this->mSet.size() == 0 || this->mSet.size() == 1)
		throw SpanException();

	std::sort(mSet.begin(), mSet.end());

	unsigned int k = static_cast<unsigned int>(*--mSet.end() - *mSet.begin());
	std::vector<int>::iterator iter = this->mSet.begin();
	std::vector<int>::iterator iter2 = this->mSet.begin();
	++iter2;

	while (iter2 != this->mSet.end()) {
		if (static_cast<unsigned int>(*iter2 - *iter) < k)
			k = *iter2 - *iter;
		++iter2;
		++iter;
	}
	return k;
};

unsigned int	Span::longestSpan() {
	if (this->mSet.size() == 0 || this->mSet.size() == 1)
		throw SpanException();
	return (static_cast<unsigned int>(*std::max_element(this->mSet.begin(), this->mSet.end()) - *std::min_element(this->mSet.begin(), this->mSet.end())));
};

void	printElem(int i) {
	std::cout << i << ' ';
}

void	Span::print() {
	std::for_each(this->mSet.begin(), this->mSet.end(), printElem);
	std::cout << std::endl;
}

const char* Span::OverflowException::what() const throw() {
	return "Exception! You are trying to overflow Span!";
};

const char* Span::SpanException::what() const throw() {
	return "Exception! Not enough numbers to find span!";
};

Span::~Span() {}
