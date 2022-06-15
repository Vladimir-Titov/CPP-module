#include "Zombie.hpp"

Zombie*	newZombie(std::string);
void	randomChump(std::string);

int main()
{
	Zombie *heapZombie = newZombie("Jonh");
	heapZombie->announce();

	randomChump("SomeOneZombie");
	randomChump("OneMoreZombie");
	delete heapZombie;
	return 0;
}