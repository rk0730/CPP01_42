#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie zombie1("Zombie1");
	Zombie zombie2("Zombie2");
	zombie1.announce();
	zombie2.announce();

	Zombie *zombie3 = newZombie("Zombie3");
	zombie3->announce();
	delete zombie3;

	randomChump("Zombie4");

	return 0;
}