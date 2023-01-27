#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string title) {
	name = title;
	HP = 10;
	EP = 10;
	DMG = 0;
}

ClapTrap::ClapTrap(const ClapTrap& clap) {

}
