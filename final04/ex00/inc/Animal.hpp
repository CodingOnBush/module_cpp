#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(Animal const &ref);
	Animal &operator=(Animal const &ref);
	~Animal();

	virtual void makeSound() const;
	std::string getType() const;
};

#endif
