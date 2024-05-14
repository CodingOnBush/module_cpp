#include "Zombie.hpp"
#include <string>

Zombie	*newZombie(std::string name)
{
	Zombie	*newone;

	newone = new Zombie(name);
	if (!newone)
		return (nullptr);
	return (newone);
}
