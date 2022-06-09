#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	Zombie* firstHorde = zombieHorde(10, "HordeZombie");
	for (int i = 0; i < 10; i++)
		firstHorde[i].announce();
	delete[] firstHorde;
	return 0;
}