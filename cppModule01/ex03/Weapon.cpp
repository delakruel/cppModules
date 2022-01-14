#include "Weapon.hpp"

Weapon::Weapon() {};

Weapon::Weapon(std::string type) {
	this->type = type;
}

void	Weapon::setType(std::string type) {
	this->type = type;
};
const std::string	&Weapon::getType(void) const {
	const std::string &typeREF = this->type;
	return (typeREF);
};

Weapon::~Weapon() {
};