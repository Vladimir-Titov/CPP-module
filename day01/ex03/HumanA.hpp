#ifndef __HUMANA_H__
#define __HUMANA_H__

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		*_weapon;
	std::string	_name;
public:
	HumanA();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void	attack();
};


#endif // __HUMANA_H__