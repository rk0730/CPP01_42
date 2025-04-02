#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
public:
	Harl();
	void complain_filter(char *level);

private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);
	std::string _levels[4];
};

#endif
