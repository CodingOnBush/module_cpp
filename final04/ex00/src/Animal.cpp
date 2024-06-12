#include "../inc/tools.hpp"
#include "../inc/Animal.hpp"

const std::string title = "[ANIMAL]";
const std::string color = MAGENTA;

Animal::Animal() : _type("(- ʖ̯-)")
{
	printLog(color, title, " constructor called");
}

Animal::Animal(Animal const &ref)
{
	printLog(color, title, " copy constructor called");
	*this = ref;
}

Animal &Animal::operator=(Animal const &ref)
{
	printLog(color, title, " assignment operator called");
	if (this != &ref)
		this->_type = ref._type;
	return (*this);
}

Animal::~Animal()
{
	printLog(color, title, " destructor called");
}

void Animal::makeSound() const
{
	printLog(color, title, " makeSound called");
}

std::string Animal::getType() const
{
	return (this->_type);
}
