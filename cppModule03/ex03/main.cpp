#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	DiamondTrap test("test");
	test.whoAmI();
	test.highFivesGuys();
	test.attack("kogo-to");
}