#include "phonebook.hpp"

int main()
{
	Phonebook kekis;
	std::string	inputCommand;

	std::cout << "Input ADD, EXIT or SEARCH command here" << std::endl;
	std::getline (std::cin, inputCommand);
	if (!std::cin)
		exit(20);
	while (inputCommand.compare("EXIT"))
	{
		if (inputCommand.compare("ADD") == 0)
			kekis.addContact();
		else if (inputCommand.compare("SEARCH") == 0)
			kekis.search();
		std::cout << "Input ADD, EXIT or SEARCH command here" << std::endl;
		std::getline (std::cin, inputCommand);
		if (!std::cin)
			exit(20);
	}
}
