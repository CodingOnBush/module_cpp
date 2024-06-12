#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
    WrongCat(void);								// Default constructor
	WrongCat(const WrongCat& obj);				// Copy constructor
	WrongCat& operator=(const WrongCat& obj);	// Assignment operator
    ~WrongCat(void);							// Destructor

    void   makeSound(void) const;
};

#endif
