#include "ScavTrap.hpp"

int main(void) {
	ScavTrap zhazhek("Zhazhek");
	ScavTrap jonkadingo(zhazhek);
	ScavTrap Geert;
	zhazhek.attack("Zoep");
	zhazhek.guardGate();
	zhazhek.guardGate();
	jonkadingo.attack("Jzizhek");
	Geert = jonkadingo;
	Geert.attack("Jan");
}
