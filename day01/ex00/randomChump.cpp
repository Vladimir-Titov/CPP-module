#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void randomChump(std::string name)
{
	Zombie zomb = *newZombie(name);
	zomb.announce();
}