#include "Zombie.hpp"
#include <string>

void	randomChump(std::string name)
{
	Zombie	newone = Zombie(name);

	newone.announce();
}
