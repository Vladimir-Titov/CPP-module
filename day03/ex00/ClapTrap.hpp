#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>
#include <string>

class ClapTrap
{
private:

	std::string		_name;
	int	_hitPoints;
	int	_energy;
	int	_damage;

public:

	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &clap);

	ClapTrap	&operator=(ClapTrap &clap);
	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		setDamage(unsigned int damage);
	int			getHitPoints();
};

#endif // __CLAPTRAP_H__