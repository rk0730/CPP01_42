#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter [DEBUG, INFO, WARNING, ERROR]" << std::endl;
		return 1;
	}
	harl.complain_filter(argv[1]);
	return 0;
}
