#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon *weapon;
public:
	HumanB(std::string name);
	void	setName(std::string name);
	void	setWeapon(Weapon &weapon);
	Weapon getWeapon(void);
	std::string	getName(void);
	void	attack(void);
	~HumanB();
};

#endif