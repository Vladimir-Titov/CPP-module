#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*_weapon;
	std::string	_name;
public:
	HumanB(std::string name);
	~HumanB(){};

	void	attack();
	void	setWeapon(Weapon &weapon);
};


#endif // __HUMANB_H__