#include "../inc/tools.hpp"

const void printLog(
	const std::string color,
	const std::string who,
	const std::string msg)
{
	std::cout << color << who + msg << RESET << std::endl;
	// std::cout << color + who + msg + RESET << std::endl;
}

const void	print
(
	const std::string color,
	const std::string msg
)
{
	std::cout << color << msg << RESET << std::endl;
}
