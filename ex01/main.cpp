#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
	Zombie *zombies = zombieHorde(5, "Zom");
	for (int i = 0; i < 5; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;

	zombies = zombieHorde(0, "Zom");
	if (zombies == NULL)
		std::cout << "No zombies" << std::endl;

	return 0;
}