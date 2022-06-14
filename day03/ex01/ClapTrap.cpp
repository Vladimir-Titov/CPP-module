#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "SomeTrap";
	_hitPoints = 10;
	_energy = 10;
	_damage = 0;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name)
{
	_hitPoints = 10;
	_energy = 10;
	_damage = 0;
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	_name = clap._name;
	_hitPoints = clap._hitPoints;
	_energy = clap._energy;
	_damage = clap._damage;
	std::cout << "Copy constructor called" << std::endl;
}


ClapTrap	&ClapTrap::operator=(ClapTrap &clap)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this == &clap)
		return *this;
	_name = clap._name;
	_hitPoints = clap._hitPoints;
	_energy = clap._energy;
	_damage = clap._damage;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy > 0)
		--this->_energy;
	if (this->_energy > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks "
				<< target << " ,causing " << this->_damage
				<< " points of damage" << std::endl;
	}
	else
		std::cout << "Haven't energy or health points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0) {
		std::cout << this->_name << " Already died" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " take "
			  << amount << " damage points" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0)
		--this->_energy;
	if (this->_energy > 0 && this->_hitPoints > 0)
	{	
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " be repair "
				  << amount << " hit points" << std::endl;
	}
	else
		std::cout << "Haven't energy or health points" << std::endl;
}

void ClapTrap::setDamage(unsigned int damage)
{
	this->_damage = damage;
}

int ClapTrap::getHitPoints()
{
	return this->_hitPoints;
}


