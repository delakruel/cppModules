#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	//creating too high and too low form
	/*
	try {
		Form test("too_low", 222, 10);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form test("too_high", 15, 0);
		std::cout << test << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	*/

	//creating norm, try to do smth
	Bureaucrat normal("babka", 20);
	Bureaucrat loh("loshara", 149);
	Form trySign("test", 50, 5);
	loh.signForm(trySign);
	normal.signForm(trySign);
}