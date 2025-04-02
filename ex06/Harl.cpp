#include "Harl.hpp"

Harl::Harl()
{
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
}

void Harl::complain_filter(char *level)
{
	int level_idx = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level == _levels[i])
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
		_debug();
		std::cout << std::endl;
		// fallthrough
	case 1:
		_info();
		std::cout << std::endl;
		// fallthrough
	case 2:
		_warning();
		std::cout << std::endl;
		// fallthrough
	case 3:
		_error();
		std::cout << std::endl;
		break;
	}
}

void Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
