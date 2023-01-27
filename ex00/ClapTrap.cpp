#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string title) {
	std::cout << "ClapTrap constructor called." << std::endl;
	name = title;
	HP = 10;
	EP = 10;
	DMG = 0;
}

ClapTrap::ClapTrap(const ClapTrap& clap) {
	std::cout << "ClapTrap copy constructor called." << std::endl;
	name = clap.name;
	HP = clap.HP;
	EP = clap.EP;
	DMG = clap.DMG;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap deconstructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clap) {
	this->name = clap.name;
	this->HP = clap.HP;
	this->EP = clap.EP;
	this->DMG = clap.DMG;
	return (*this);
}
