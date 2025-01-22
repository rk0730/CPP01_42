#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
public:
	Harl();
	void complain_filter(char *level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	std::string levels[4];
};

#endif
