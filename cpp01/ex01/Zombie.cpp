#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie( void )
{
	std::cout << "A zombie has been create (born) without any name." << std::endl;
	return;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->_name << ": has been created (born)." << std::endl;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << ": has been destroyed (killed)." << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
