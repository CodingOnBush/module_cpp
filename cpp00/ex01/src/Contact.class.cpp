#include <iostream>
#include "../inc/Contact.class.hpp"

Contact::Contact(
	std::string first_name,
	std::string last_name,
	std::string nickname,
	std::string phone_number,
	std::string darkest_secret
) :
	first_name(first_name),
	last_name(last_name),
	nickname(nickname),
	phone_number(phone_number),
	darkest_secret(darkest_secret)
{
	std::cout << "Contact constructor called" << std::endl;
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
	return;
}

Contact::~Contact( void )
{	
	std::cout << "Contact destructor called" << std::endl;
	return;
}

