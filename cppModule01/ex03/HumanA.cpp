#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) {
	this->name = name;
	this->weapon = weapon;
}

void	HumanA::setName(std::string name) {
	this->name = name;
};

void	HumanA::setWeapon(Weapon weapon) {
	this->weapon = weapon;
};

std::string	HumanA::getName(void) {
	return (this->name);
};
	
Weapon HumanA::getWeapon(void) {
	return (this->weapon);
};

void	HumanA::attack() {
	std::cout << this->name << " attacks with his " << weapon.getType() << std::endl;
};

HumanA::~HumanA() {
};