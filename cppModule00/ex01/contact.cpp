#include "contact.hpp"
	
Contact::Contact(){};

void Contact::inputContcact() {
	std::cout << "Input First Name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Input Last Name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Input Nick Name: ";
	std::getline(std::cin, this->nick_name);
	std::cout << "Input Phone Number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Input Darkest Secret: ";
	std::getline(std::cin, this->darkest_secret);
}

void Contact::setFirstName(std::string first_name) {
	this->first_name = first_name;
}
void Contact::setLastName(std::string last_name) {
	this->last_name = last_name;
}
void Contact::setNickName(std::string nick_name) {
	this->nick_name = nick_name;
}
void Contact::setPhoneNumber(std::string phone_number) {
	this->phone_number = phone_number;
}
void Contact::setDarkestSecret(std::string darkest_secret) {
	this->darkest_secret = darkest_secret;
}
std::string Contact::getFirstName() {
	return (first_name);
}
std::string Contact::getLastName() {
	return (last_name);
}
std::string Contact::getNickName() {
	return (nick_name);
}
std::string Contact::getPhoneNumber() {
	return (phone_number);
}	
std::string Contact::getDarkestSecret() {
	return (darkest_secret);
}

Contact::~Contact(){};