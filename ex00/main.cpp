#include "Zombie.hpp"

int main(void){
	Zombie zombie1;
	Zombie zombie2;

	zombie1.setName("Zombie1");
	zombie2.setName("Zombie2");

	zombie1.announce();
	zombie2.announce();

	return 0;
}