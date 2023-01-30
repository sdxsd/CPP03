#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
		public:
		FragTrap(void);
		FragTrap(std::string title);
		FragTrap(const FragTrap& toCopy);
		~FragTrap(void);
		FragTrap& operator=(const FragTrap& toCopy);
		void highFivesGuys(void);
};

#endif // FRAGTRAP_H
