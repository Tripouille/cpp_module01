#include "HumanA.hpp"

void		HumanA::attack(void)
{
	std::cout << _name << " attacking with " << _weapon.getType() << "." << std::endl;
}
