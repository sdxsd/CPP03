#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string title) {
	std::cout << "ClapTrap constructor called." << std::endl;
	name = title;
	HP = 10;
	EP = 10;
	DMG = 0;
}

ClapTrap::ClapTrap(int hp, int ep, int dmg, std::string title) {
	std::cout << "ClapTrap(hp, ep, dmg, title) constructor called." << std::endl;
	HP = hp;
	EP = ep;
	DMG = dmg;
	name = title;
}

ClapTrap::ClapTrap(const ClapTrap& clap) {
	std::cout << "ClapTrap copy constructor called." << std::endl;
	name = clap.name;
	HP = clap.HP;
	EP = clap.EP;
	DMG = clap.DMG;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clap) {
	this->name = clap.name;
	this->HP = clap.HP;
	this->EP = clap.EP;
	this->DMG = clap.DMG;
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (EP > 0 && HP > 0) {
		std::cout << "Claptrap " << name << " Attacks " << target
				  << ", causing " << DMG << " points of damage!" << std::endl;
		EP--;
	}
	else
		std::cout << "ClapTrap " << name << " out of energy." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " took " << amount << " damage" << std::endl;
	HP -= amount;
}

void ClapTrap::beRepaired(unsigned int value) {
	if (EP > 0 && HP > 0) {
		std::cout << "ClapTrap " << name << " repaired by " << value << std::endl;
		HP += value;
		EP--;
	}
	else
		std::cout << "ClapTrap " << name << " too tired to repair" << std::endl;
}
