#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_name = "DEFAULT_NAME";
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap Name constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
}

// ClapTrap	&ClapTrap::operator=(const ClapTrap& other) {
// 	if (this != &other) {
// 		this->_name = other._name;
// 		this->_hp = other._hp;
// 		this->_energy = other._energy;
// 		this->_damage = other._damage;
// 	}
// 	return (*this);
// }

// ClapTrap::ClapTrap(const ClapTrap& copy) {
// 	*this = copy;
// }

void	ScavTrap::attack(std::string const &target) {
	std::cout << "ClapTrap " << this->_name << " attack " << target << " causing " << this->_damage << " points of damage!"<< std::endl;
};
// void	ClapTrap::takeDamage(unsigned int amount) {
// 	std::cout << "ClapTrap " << this->_name << " was attacked and lose " << amount << " hitpoints!" << std::endl;
// };
// void	ClapTrap::beRepaired(unsigned int amount) {
// 	std::cout << "ClapTrap " << this->_name << " was healed on " << amount << " hitpoints!" << std::endl;
// };

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}
