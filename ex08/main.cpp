#include "Human.hpp"

int main(void)
{
	Human bob;

	bob.action("Coucou", "42");
	bob.action("meleeAttack", "42");
	bob.action("rangedAttack", "42");
	bob.action("intimidatingShout", "42");
	bob.action("Bye", "42");
	return (0);
}