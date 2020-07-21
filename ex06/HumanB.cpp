#include "HumanB.hpp"

void		HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void		HumanB::attack(void)
{
	std::cout << _name << " attacking with " << _weapon->getType() << "." << std::endl;
}
