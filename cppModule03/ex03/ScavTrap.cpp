#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_name = "DEFAULT_NAME";
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap Name constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap& other) {
		if (this != &other) {
			this->_name = other._name;
		this->_hp = other._hp;
		this->_energy = other._energy;
		this->_damage = other._damage;
	}
	return (*this);
}
ScavTrap::ScavTrap(const ScavTrap& copy) {
	*this = copy;
}

void	ScavTrap::attack(std::string const &target) {
	std::cout << "ScavTrap " << this->_name << " attack " << target << " causing " << this->_damage << " points of damage!"<< std::endl;
};

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode >_<"<< std::endl;

}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}
