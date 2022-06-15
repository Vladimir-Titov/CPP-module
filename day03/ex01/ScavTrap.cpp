#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "[ScavTrap] Default constructor"	 << std::endl;
}

ScavTrap::ScavTrap(std::string name)
:ClapTrap(name)
{
	std::cout << "[ScavTrap] Name constructor"	 << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scave)
{
	this->_hitPoints = scave.getHitPoints();
}

ScavTrap::~ScavTrap()
{
	
}

ScavTrap& ScavTrap::operator=(ScavTrap &scave)
{
	
}
