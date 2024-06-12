#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << this->_type << " constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog& src)
{
	std::cout << this->_type << " copy constructor called" << std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog& obj)
{
	std::cout << this->_type << " assignation operator called" << std::endl;
	if (this == &obj)
		return *this;
	this->_type = obj._type;
	return *this;
}

Dog::~Dog(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}
