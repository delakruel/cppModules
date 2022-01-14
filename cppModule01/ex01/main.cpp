#include "Zombie.hpp"

int main() {
	Zombie *arZomb;

	arZomb = zombieHorde(10, "peppa");
	for (int i = 0; i < 10; i++) {
		arZomb[i].announce();
	}
	delete[] arZomb;
	return (0);
}