#include "phonebook.hpp"

Phonebook::Phonebook(){
	this->num = 0;
};

void	Phonebook::addContact() {
	if (this->num <= 7)
		this->contacts[this->num] = Contact();
	this->contacts[this->num % 8].inputContcact();
	this->num++;
};

void	Phonebook::printContact(int	num) {
	std::cout << "First name: " << this->contacts[num].getFirstName() << std::endl;
	std::cout << "Last name : " << this->contacts[num].getLastName() << std::endl;
	std::cout << "Nickname  : " << this->contacts[num].getNickName() << std::endl;
	std::cout << "Number    : " << this->contacts[num].getPhoneNumber() << std::endl;
	std::cout << "Secret    : " << this->contacts[num].getDarkestSecret() << std::endl;
}

std::string	Phonebook::formOut(std::string str) {
	if (str.size() > 10) {
		str.resize(10);
		str.back() = '.';
	}
	return (str);
}

int	Phonebook::isNum(std::string str) {
	int	i;
	int	len;

	i = 0;
	len = str.length();
	while (i < len) {
		if (str.at(i) < '0' || str.at(i) > '9')
			return (0);
		i++;
	}
	return (1);
}

void	Phonebook::search() {
	int	i;
	std::string	input;

	i = 0;
	std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" <<
				 std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	while (i < (this->num <= 8 ? this->num : 8)) {
		std::cout << "|" << std::setw(10) << (i + 1) << "|" <<
		std::setw(10) << formOut(this->contacts[i].getFirstName()) << "|" <<
		std::setw(10) << formOut(this->contacts[i].getLastName()) << "|" <<
		std::setw(10) << formOut(this->contacts[i].getNickName()) << "|" << std::endl;
		i++;
	}
	if (this->num > 0) {
		std::cout << "Input contact index" << std::endl;
		std::getline(std::cin, input);
		if (!std::cin)
			exit(20);
		i = atoi(input.c_str());
		while (!isNum(input) || i < 1 || i > 8 || i > this->num)
		{
			std::cout << "No sense! Input correct index!" << std::endl;
			std::getline(std::cin, input);
			if (!std::cin)
				exit(20);
			i = atoi(input.c_str());
		}
		printContact(i - 1);
	}
}

Phonebook::~Phonebook(){};
