#include "Zombie.hpp"
#include <string>

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*horde = new Zombie[N];

	if (N <= 0)
		return (nullptr);
	if (!horde)
		return (nullptr);
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
