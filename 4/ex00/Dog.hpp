#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
    Dog(void);						// Default constructor
	Dog(const Dog& obj);			// Copy constructor
	Dog& operator=(const Dog& obj);	// Assignment operator
    ~Dog(void);						// Destructor

    void   makeSound(void) const;
};

#endif
