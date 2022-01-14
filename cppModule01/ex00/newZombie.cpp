#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie	*kek = new Zombie;

	kek->setName(name);
	return (kek);
};