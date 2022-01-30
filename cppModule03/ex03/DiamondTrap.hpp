#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap	&operator=(const DiamondTrap& other);

    void    whoAmI(void);
    void    attack(std::string const &target);

	
    ~DiamondTrap();
};

#endif