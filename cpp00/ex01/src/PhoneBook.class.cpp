#include "../inc/phonebook.hpp"

PhoneBook::PhoneBook()
{
	// constructor
	this->added_ = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	// destructor
	return ;
}

void	PhoneBook::welcome_( void )
{
	std::string	msg = "Welcome in this awesome Phone Book 🌸";
	std::cout << blue << msg << reset << std::endl;
	return ;
}

void	PhoneBook::goodbye_( void )
{
	std::string	msg = "Goodbye 👋";
	std::cout << blue << msg << reset << std::endl;
	return ;
}

void	PhoneBook::printPhoneBook_( void )
{
	for (size_t i = 0; i < 8; i++)
		std::cout << "first name : " << this->contacts_[i].getFirstName() << std::endl;
	return ;
}

void	PhoneBook::addContact_( void )
{
	int	index;

	index = this->added_ % 8;
	this->added_++;
	this->contacts_[index].initNewContact_();
	this->contacts_[index].setIndex(index);
	return ;
}

void	PhoneBook::seachContact_( void )
{
	std::string	input = "";
	int			index;

	while (1)
	{
		std::cout << "Enter the index you want to seach :";
		std::getline(std::cin, input);
		if (input.length() != 1 || !std::isdigit(input[0]))
		{
			std::cout << "Usage : 1 .. 8" << std::endl;
			continue;
		}
		index = std::stoi(input);
		if (index >= 0 && index <= 8)
			break;
	}
	std::cout << "You want the contact at the index : " << index << std::endl;	
}

void	PhoneBook::startSimulation( void )
{
	std::string	input;

	welcome_();
	while (1)
	{
		std::cout << "→ ";
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("EXIT"))
			break;
		if (input.empty())
			continue;
		if (!input.compare("ADD"))
			this->addContact_();
		if (!input.compare("SEARCH"))
			this->seachContact_();
	}
	goodbye_();
}
