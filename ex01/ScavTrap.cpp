#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(100, 50, 20, "Zoep") {
	std::cout << "ScavTrap(void) constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string title): ClapTrap(100, 50, 20, title) {
	std::cout << "ScavTrap(std::string title) constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& toCopy): ClapTrap(toCopy.HP, toCopy.EP, toCopy.DMG, toCopy.name) {
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called." << std::endl;
}

// Deep copy.
ScavTrap& ScavTrap::operator=(const ScavTrap& toCopy) {
	std::cout << "Scavtrap operator= called." << std::endl;
	this->HP = toCopy.HP;
	this->EP = toCopy.EP;
	this->DMG = toCopy.DMG;
	this->name = toCopy.name;
	return (*this);
}

void ScavTrap::guardGate(void) {
	static bool gateStatus;

	if (gateStatus == 0) {
		gateStatus = 1;
		std::cout << "ScavTrap: " << this->name << " is guarding the gate." << std::endl;
	}
	else {
		gateStatus = 0;
		std::cout << "ScavTrap: " << this->name << " is no longer guarding the gate." << std::endl;
	}
}
