#include "Converter.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Please, enter one argument" << std::endl;
		return (0);
	}
	Converter converter;
	std::string str(argv[1]);

	if (str.size() < 1) {
		std::cout << "Please, enter non-empty argument" << std::endl;
		return (0);
	}
	converter.strCheck(str);
	converter.toChar();
	converter.toInt();
	converter.toFloat(str);
	converter.toDouble(str);
}