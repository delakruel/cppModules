#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string	first_name,
				last_name,
				nick_name,
				phone_number,
				darkest_secret;
public:
	Contact();
	void inputContcact();
	void setFirstName(std::string first_name); 
	void setLastName(std::string last_name); 
	void setNickName(std::string nick_name); 
	void setPhoneNumber(std::string phone_number);
	void setDarkestSecret(std::string darkest_secret);
	std::string getFirstName(); 
	std::string getLastName();
	std::string getNickName(); 
	std::string getPhoneNumber(); 
	std::string getDarkestSecret();
	~Contact();
};

#endif