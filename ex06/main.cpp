#include"Harl.hpp"

int main(int ac, char **av)
{
	if(ac == 2)
	{
		std::string level(av[1]);
		Harl instance;
		instance.complain(level);
	}
	else
		std::cout<<"USAGE : ./harlFilter \"LEVEL\""<<std::endl;
}