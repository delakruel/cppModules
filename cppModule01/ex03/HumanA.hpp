#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon &weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	void	setName(std::string name);
	void	setWeapon(Weapon weapon);
	Weapon getWeapon(void);
	std::string	getName(void);
	void	attack(void);
	~HumanA();
};

#endif