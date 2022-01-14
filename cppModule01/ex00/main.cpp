#include "Zombie.hpp"

int main() {
	Zombie	a;
	randomChump("Chump");
	Zombie *b = newZombie("newZomb");

	a.setName("mainZomb");
	a.announce();
	b->announce();
	delete b;
}