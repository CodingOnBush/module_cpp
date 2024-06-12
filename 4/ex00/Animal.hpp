#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string _type;

public:
    Animal(void);							// Default constructor
    Animal(const Animal& src);			// Copy constructor
    Animal& operator=(const Animal& rhs);	// Assignment operator
    virtual ~Animal(void);				// Destructor

    virtual void    makeSound(void) const;
    std::string     getType(void) const; 
};

#endif
