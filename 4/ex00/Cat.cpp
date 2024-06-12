#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << this->_type << " constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat& obj)
{
	std::cout << this->_type << " copy constructor called" << std::endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << this->_type << " assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return *this;
}

Cat::~Cat(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}
