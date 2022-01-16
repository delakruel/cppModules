#include "Bureaucrat.hpp"

int main() {
	//creating too high and too low bureau
	/*
	try {
		Bureaucrat test("too_low", 222);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat test("too_high", 0);
		std::cout << test << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	*/
	//creating norm, try to do smth
	Bureaucrat normal("babka", 20);
	try {
		normal.incGrade();
		std::cout << normal << std::endl;
		normal.decGrade();
		std::cout << normal << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	//decrement or increment exception
	/*
	Bureaucrat testDec("tooLow", 149);
	std::cout << testDec << std::endl;
	try {
		testDec.decGrade();
		std::cout << testDec << std::endl;
		testDec.decGrade();
		std::cout << testDec << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	Bureaucrat testInc("tooHigh", 2);
	std::cout << testInc << std::endl;
	try {
		testInc.incGrade();
		std::cout << testInc << std::endl;
		testInc.incGrade();
		std::cout << testInc << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	*/
}