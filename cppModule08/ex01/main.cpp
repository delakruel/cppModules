#include "Span.hpp"

int main() {
	Span spSubj = Span(5);

	spSubj.addNumber(5);
	spSubj.addNumber(3);
	spSubj.addNumber(17);
	spSubj.addNumber(9);
	spSubj.addNumber(11);

	std::cout << spSubj.shortestSpan() << std::endl;
	std::cout << spSubj.longestSpan() << std::endl;

	Span sp = Span(0);

	sp.addNumber(10);
}