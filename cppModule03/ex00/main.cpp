#include "ClapTrap.hpp"

int main() {
	ClapTrap first("first");
	ClapTrap second("second");

	first.attack("second");
	second.takeDamage(4);
	second.beRepaired(2);
}