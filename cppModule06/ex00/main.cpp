#include "Converter.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Please, enter right argument" << std::endl;
		return (0);
	}
	Converter converter;
	std::string str(argv[1]);

	if (str.size() < 1) {
		std::cout << "Please, enter right argument" << std::endl;
		return (0);
	}
	converter.strCheck(str);
	// std::cout << "char: " << converter.toChar(str) << std::endl;
	// std::cout << "int: " << converter.toInt(str) << std::endl;
	// std::cout << "float: " << converter.toFloat(str) << std::endl;
	// std::cout << "double: " << converter.toDouble(str) << std::endl;
	converter.toChar();
	converter.toInt();
	converter.toFloat(str);
	converter.toDouble(str);
}