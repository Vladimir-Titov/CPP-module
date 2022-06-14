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
	this->_name = scave._name;
	this->_hitPoints = scave._hitPoints;
	this->_energy = scave._energy;
	this->_damage = scave._damage;
}

ScavTrap::~ScavTrap()
{
	
}

ScavTrap& ScavTrap::operator=(ScavTrap &scave)
{
	
}
