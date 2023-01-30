#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& toCopy);
		~ScavTrap(void);
		ScavTrap& operator=(const ScavTrap& toCopy);
		void	guardGate(void);
};

#endif // SCAVTRAP_H
