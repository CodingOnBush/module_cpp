#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
    Cat(void);						// Default constructor
	Cat(const Cat& obj);			// Copy constructor
	Cat& operator=(const Cat& obj);	// Assignment operator
    ~Cat(void);						// Destructor

    void   makeSound(void) const;
};

#endif
