#include "../inc/Dog.hpp"
#include "../inc/tools.hpp"

const std::string title = "[DOG]";
const std::string color = RED;

Dog::Dog()
{
	printLog(color, title, " constructor called");
	this->_type = "Dog";
}

Dog::Dog(Dog const &ref)
{
	printLog(color, title, " copy constructor called");
	*this = ref;
}

Dog &Dog::operator=(Dog const &ref)
{
	printLog(color, title, " assignment operator called");
	if (this != &ref)
		this->_type = ref._type;
	return (*this);
}

Dog::~Dog()
{
	printLog(color, title, " destructor called");
}

void Dog::makeSound() const
{
	printLog(color, title, " Woof ! 🐕🐶");
}
