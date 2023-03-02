#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(100, 100, 30, "Zhazoepzhekadingoghavar") {
	std::cout << "FragTrap(void) constructor called." << std::endl;
}

FragTrap::FragTrap(std::string title): ClapTrap(100, 100, 30, title) {
	std::cout << "FragTrap(std::string title) constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& toCopy): ClapTrap(toCopy.HP, toCopy.EP, toCopy.DMG, toCopy.name) {
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called." << std::endl;
}

// DEEP copy.
FragTrap& FragTrap::operator=(const FragTrap& toCopy) {
	std::cout << "Fragtrap operator= called." << std::endl;
	this->HP = toCopy.HP;
	this->EP = toCopy.EP;
	this->DMG = toCopy.DMG;
	this->name = toCopy.name;
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Let's have a high five guys!" << std::endl;
}
