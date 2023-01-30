#include "FragTrap.hpp"

int main(void) {
	FragTrap zhazhek("Zhazhek");
	FragTrap jonkadingo(zhazhek);
	FragTrap Geert;
	zhazhek.attack("Zoep");
	zhazhek.highFivesGuys();
	zhazhek.highFivesGuys();
	jonkadingo.attack("Jzizhek");
	Geert = jonkadingo;
	Geert.attack("Jan");
}
