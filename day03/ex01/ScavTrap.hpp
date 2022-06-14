#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &scave);
	~ScavTrap();

	ScavTrap	&operator=(ScavTrap &scave);
};
