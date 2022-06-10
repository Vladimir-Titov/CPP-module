#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	this->_type = weaponType;
}
void Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string& Weapon::getType()
{
	return this->_type;
}

