#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	FragTrap first("first");
	ScavTrap second("second");

	first.highFivesGuys();
	second.guardGate();
	first.attack("second");
	second.takeDamage(4);
	second.attack("first");
	second.beRepaired(2);
}