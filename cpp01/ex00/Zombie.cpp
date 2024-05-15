#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string name) : name_(name)
{
	std::cout << this->name_ << ": has been created (born)." << std::endl;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->name_ << ": has been destroyed (killed)." << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
