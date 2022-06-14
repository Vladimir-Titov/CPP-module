#include "ClapTrap.hpp"

int main() //
{
	ClapTrap	trapName("Trap1");
	ClapTrap	trapDefault;
	ClapTrap	trapCopy(trapName);
	ClapTrap	trapOp("TEST@!");

	trapOp = trapDefault;

	trapName.setDamage(2);
	trapDefault.setDamage(10);
	trapCopy.setDamage(1);
	trapOp.setDamage(7);
	std::cout << "-----START ATTACK TEST-----" << std::endl;
	trapName.attack("target 1");
	trapDefault.attack("target 2");
	trapCopy.attack("target 3");
	trapOp.attack("target 4");
	std::cout << "-----START TAKE DAMAGE TEST-----" << std::endl;
	trapName.takeDamage(5);
	trapDefault.takeDamage(11);
	trapDefault.takeDamage(9);
	trapCopy.takeDamage(3);
	trapOp.takeDamage(3);
	std::cout << "-----START REPAIRED TEST-----" << std::endl;
	std::cout << "Before repair: " << trapName.getHitPoints() << std::endl;
	trapName.beRepaired(5);
	std::cout << "After repair: " << trapName.getHitPoints() << std::endl;
	std::cout << "Before repair: " << trapDefault.getHitPoints() << std::endl;
	trapDefault.beRepaired(5);
	std::cout << "After repair: " << trapDefault.getHitPoints() << std::endl;
	std::cout << "Before repair: " << trapCopy.getHitPoints() << std::endl;
	trapCopy.beRepaired(5);
	std::cout << "After repair: " << trapCopy.getHitPoints() << std::endl;
	std::cout << "Before repair: " << trapOp.getHitPoints() << std::endl;
	trapOp.beRepaired(5);
	std::cout << "After repair: " << trapOp.getHitPoints() << std::endl;
	return 0;
}