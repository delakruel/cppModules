#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *arrayZomb = new Zombie[N];

	for (int i = 0; i < N; i++) {
		//name.back() = (char)(i + '0');
		arrayZomb[i].setName(name);
	}
	return (arrayZomb);
}