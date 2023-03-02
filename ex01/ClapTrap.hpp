#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
	protected: // Protected allows subclasses to access member variables.
		std::string name;
		long	HP;
		long	EP;
		long	DMG;
	public:
		ClapTrap(std::string title);
		ClapTrap(int hp, int ep, int dmg, std::string title);
		ClapTrap(const ClapTrap &clap);
		~ClapTrap(void);
		ClapTrap& operator=(const ClapTrap &clap);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int value);
};

#endif // CLAPTRAP_H
