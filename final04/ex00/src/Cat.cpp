#include "../inc/tools.hpp"
#include "../inc/Cat.hpp"

const std::string title = "[CAT]";
const std::string color = YELLOW;

Cat::Cat()
{
	printLog(color, title, " constructor called");
	this->_type = "Cat";
}

Cat::Cat(Cat const &ref)
{
	printLog(color, title, " copy constructor called");
	*this = ref;
}

Cat &Cat::operator=(Cat const &ref)
{
	printLog(color, title, " assignment operator called");
	if (this != &ref)
		this->_type = ref._type;
	return (*this);
}

Cat::~Cat()
{
	printLog(color, title, " destructor called");
}

void Cat::makeSound() const
{
	printLog(color, title, " 🐈Meow!🐱");
}
