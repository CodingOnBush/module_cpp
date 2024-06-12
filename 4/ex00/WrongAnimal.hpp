#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal(void);								// Default constructor
    WrongAnimal(const WrongAnimal& obj);			// Copy constructor
    WrongAnimal& operator=(const WrongAnimal& obj);	// Assignment operator
    ~WrongAnimal(void);								// Destructor

    WrongAnimal(std::string type);

    void            makeSound(void) const;
    std::string     getType(void) const; 
};

#endif
