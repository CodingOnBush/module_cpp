#include <iostream>
#include "../inc/PhoneBook.class.hpp"

PhoneBook::PhoneBook( void )
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	PhoneBook::welcome( void )
{
	std::cout << "Welcome in your personal Phone Book 🌸" << std::endl;
	return ;
}

void	PhoneBook::printPhoneBook( void )
{
	std::cout << "Let's print this phone book..." << std::endl;
	// for (size_t i = 0; i < 8; i++)
	// 	std::cout << "first name : " << this->contacts[i].first_name << std::endl;
	return ;
}
