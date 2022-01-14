#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "contact.hpp"

class Phonebook {

private:
	Contact	contacts[8];
	int		num;
public:
	Phonebook();
	~Phonebook();
	void	addContact();
	void	printContact(int num);
	void	search();
	int		isNum(std::string str);
	std::string	formOut(std::string str);
};

#endif
