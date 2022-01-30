#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called" << std::endl;
	this->_name = "DEFAULT_NAME";
	this->_hp = 10;
	this->_energy = 10;
	this->_damage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Name constructor called" << std::endl;
	this->_name = name;
	this->_hp = 10;
	this->_energy = 10;
	this->_damage = 0;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hp = other._hp;
		this->_energy = other._energy;
		this->_damage = other._damage;
	}
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	*this = copy;
}

void	ClapTrap::attack(std::string const &target) {
	std::cout << "ClapTrap " << this->_name << " attack " << target << " causing " << this->_damage << " points of damage!"<< std::endl;
};
void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " was attacked and lose " << amount << " hitpoints!" << std::endl;
};
void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " was healed on " << amount << " hitpoints!" << std::endl;
};

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}
