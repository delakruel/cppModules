#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv) {

	if (argc != 4) {
		std::cout << "Enter right number of arguments" << std::endl;
		return (1);
	}

	std::string filename(argv[1]), s1(argv[2]), s2(argv[3]), line;
	std::ifstream input(filename, std::ifstream::in);

	if (!input.is_open()) {
		std::cout << "Can't open file for reading!" << std::endl;
		return (1);
	}
	
	std::ofstream output(filename.append(".replace"), std::ofstream::trunc);
	std::size_t beg;

	if (!output.is_open()) {
		std::cout << "Can't open file for writing!" << std::endl;
		return (1);
	}
	while (std::getline(input, line)) {
		while ((beg = line.find(s1)) != std::string::npos) {
			line.erase(beg, s1.length());
			line.insert(beg, s2);
		}
		output << line << std::endl;
	}
	return (0);
}