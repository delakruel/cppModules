#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap first("first");
	ScavTrap second("second");

	first.attack("second");
	second.takeDamage(4);
	second.beRepaired(2);
}