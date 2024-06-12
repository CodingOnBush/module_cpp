#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
	std::cout << this->_type << " copy constructor called" << std::endl;
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	std::cout << this->_type << " assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}
