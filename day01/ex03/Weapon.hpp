#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon() {};
	Weapon(std::string weaponType);
	~Weapon() {};

	void				setType(std::string type);
	const std::string&	getType();
};
#endif // __WEAPON_H__