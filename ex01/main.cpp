#include "ClapTrap.hpp"

int main(void) {
	ClapTrap coolguy("Jonkadingo");

	coolguy.attack("Zhazhek");
	coolguy.beRepaired(10);
	coolguy.takeDamage(10);
	for (int i = 0; i < 15; i++)
		coolguy.attack("Zoep");
}
