#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_name = "DEFAULT_NAME";
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap Name constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap	&FragTrap::operator=(const FragTrap& other) {
		if (this != &other) {
			this->_name = other._name;
		this->_hp = other._hp;
		this->_energy = other._energy;
		this->_damage = other._damage;
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap& copy) {
	*this = copy;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->_name << " WANNA HIVE FIVE YOU!" << std::endl;
};	

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}
