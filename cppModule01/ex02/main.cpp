#include <string>
#include <iostream>

int main() {
	std::string kekis = "HI THIS IS BRAIN";
	std::string *stringPTR = &kekis;
	std::string &stringREF = kekis;

	std::cout << "string adress is   : " << &kekis << std::endl;
	std::cout << "stringPTR adress is: " << stringPTR << std::endl;
	std::cout << "stringREF adress is: " << &stringREF << std::endl;

	std::cout << "string is             : " << kekis << std::endl;
	std::cout << "string by stringPTR is: " << *stringPTR << std::endl;
	std::cout << "string by stringREF is: " << stringREF << std::endl;
	return (0);
}