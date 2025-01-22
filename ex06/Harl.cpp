#include "Harl.hpp"

Harl::Harl()
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

void Harl::complain_filter(char *level)
{
	int level_idx = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			level_idx = i;
			break;
		}
	}
	switch (level_idx)
	{
	case -1:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	case 0:
		debug();
		std::cout << std::endl;
		// fallthrough
	case 1:
		info();
		std::cout << std::endl;
		// fallthrough
	case 2:
		warning();
		std::cout << std::endl;
		// fallthrough
	case 3:
		error();
		std::cout << std::endl;
		break;
	}
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
