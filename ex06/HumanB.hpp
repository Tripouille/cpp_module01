#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name) : _name(name) {}
		void		attack(void);
		void		setWeapon(Weapon& weapon);

	private:
		std::string		_name;
		Weapon*			_weapon;
};

#endif