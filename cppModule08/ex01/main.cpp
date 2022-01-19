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

	Span sp1 = Span(1);
	try {
		sp1.addNumber(10);
		sp1.addNumber(20);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Span sp2 = Span(10000);
	sp2.addNumber(999);
	//sp2.addNumber(500);
	try {
		std::cout << sp2.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << sp2.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	sp2.print();
}