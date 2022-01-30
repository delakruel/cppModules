#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->_name = "DEFAULT_NAME";
    ClapTrap::_name = "DEFAULT_clap_name";
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name) {
	std::cout << "DiamondTrap Name constructor called" << std::endl;
	this->_name = name;
    ClapTrap::_name = name + "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hp = other._hp;
		this->_energy = other._energy;
		this->_damage = other._damage;
	}
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) {
	*this = copy;
}

void    DiamondTrap::attack(std::string const &target) {
    ScavTrap::attack(target);
};

void    DiamondTrap::whoAmI(void) {
    std::cout << "I AM DIAMONDTRAP NAMED " << this->_name << " AND THIS IS MY CLAP NAME: " << ClapTrap::_name << std::endl;
};

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called" << std::endl;
}
