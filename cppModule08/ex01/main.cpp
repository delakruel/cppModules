#include "Span.hpp"

int main() {
	Span spSubj = Span(5);

	spSubj.addNumber(5);
	spSubj.addNumber(3);
	spSubj.addNumber(17);
	spSubj.addNumber(9);
	spSubj.addNumber(11);

	spSubj.print();
	std::cout << spSubj.shortestSpan() << std::endl;
	std::cout << spSubj.longestSpan() << std::endl;

	Span sp1(1);
	try {
		sp1.addNumber(10);
		sp1.addNumber(20);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	sp1.print();

	Span sp2 = Span(10000);
	sp2.addNumber(999);
	// sp2.addNumber(500);
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

	Span test(3);
	test.addNumber(-2147483000);
	test.addNumber(2147483000);
	test.addNumber(5000);
	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;

	std::vector<int> vec(50000, 99);
	Span vecSpan(100000);
	vecSpan.addNumber(vec.begin(), vec.end());
	vecSpan.addNumber(77);
	vecSpan.addNumber(101);
	std::cout << vecSpan.shortestSpan() << std::endl;
	std::cout << vecSpan.longestSpan() << std::endl;
}