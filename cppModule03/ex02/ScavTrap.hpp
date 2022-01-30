#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copy);
	ScavTrap	&operator=(const ScavTrap& other);

	void	attack(std::string const &target);
	void	guardGate();

	~ScavTrap();
};

#endif