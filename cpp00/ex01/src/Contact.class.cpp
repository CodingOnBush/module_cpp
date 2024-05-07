#include "../inc/phonebook.hpp"

Contact::Contact( void )
{
	return;
}

Contact::~Contact( void )
{
	return;
}

void	Contact::setIndex( int index )
{
	this->index_ = index;
	return ;
}

void	Contact::setFirstName( std::string first_name )
{
	this->first_name_ = first_name;
	return ;
}

void	Contact::setLastName( std::string last_name )
{
	this->last_name_ = last_name;
	return ;
}

void	Contact::setNickname( std::string nickname )
{
	this->nickname_ = nickname;
	return ;
}

void	Contact::setPhoneNumber( std::string phone_number )
{
	this->phone_number_ = phone_number;
	return ;
}

void	Contact::setDarkestSecret( std::string darkest_secret )
{
	this->darkest_secret_ = darkest_secret;
	return ;
}

int		Contact::getIndex( void )
{
	return (this->index_);
}

std::string	Contact::getFirstName( void )
{
	return (this->first_name_);
}

std::string	Contact::getLastName( void )
{
	return (this->last_name_);
}

std::string	Contact::getNickname( void )
{
	return (this->nickname_);
}

void	Contact::initNewContact_( void )
{
	std::string	input;

	this->first_name_ = getInput_("Enter first name: ");
	this->last_name_ = getInput_("Enter last name: ");
	this->nickname_ = getInput_("Enter nickname: ");
	this->phone_number_ = getInputNumber_("Enter phone number: ");
	this->darkest_secret_ = getInput_("Enter darkest secret: ");
	return ;
}

std::string	Contact::getInput_( std::string msg )
{
	std::string	input;

	input = "";
	while (input.empty() || std::cin.eof())
	{
		std::cout << msg;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
	}
	return (input);
}

static int	isValidPhoneNumber(std::string input)
{
	if (input.empty())
		return (0);
	if (input[0] != '+' && !std::isdigit(input[0]))
		return (0);
	for (int i = 1; input[i] != '\0'; i++)
	{
		if (!std::isdigit(input[i]))
			return (0);
	}
	return (1);
}

std::string	Contact::getInputNumber_( std::string msg )
{
	std::string	input;

	input = "";
	do
	{
		std::cout << msg;
		std::getline(std::cin, input);
		if (input.empty())
			continue;
	} while (!isValidPhoneNumber(input));
	return (input);
}
