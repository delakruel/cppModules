#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}

void	HumanB::setName(std::string name) {
	this->name = name;
};
std::string	HumanB::getName(void) {
	return (this->name);
};

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
};
	
Weapon HumanB::getWeapon(void) {
	return *(this->weapon);
};

void	HumanB::attack() {
	std::cout << this->name << " attacks with his " << weapon->getType() << std::endl;
};

HumanB::~HumanB() {
};