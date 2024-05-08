#include "../inc/phonebook.hpp"

Contact::Contact(void)
{
	this->index = -1;
	this->firstName_ = "";
	this->lastName_ = "";
	this->nickname_ = "";
	this->phoneNumber_ = "";
	this->darkestSecret_ = "";
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::updateIndex( int index )
{
	this->index = index;
	return ;
}

void	Contact::initNewContact_(void)
{
	std::string	input;

	if (!std::cin.eof())
		this->firstName_ = getInput_("Enter first name: ");
	if (!std::cin.eof())
		this->lastName_ = getInput_("Enter last name: ");
	if (!std::cin.eof())
		this->nickname_ = getInput_("Enter nickname: ");
	if (!std::cin.eof())
		this->phoneNumber_ = getInputNumber_("Enter phone number: ");
	if (!std::cin.eof())
		this->darkestSecret_ = getInput_("Enter darkest secret: ");
	return ;
}

std::string	Contact::getInput_( std::string msg )
{
	std::string	input = "";

	while (1)
	{
		std::cout << msg;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}
		if (input.empty())
			continue;
		else
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
	std::string	input = "";

	while (1)
	{
		input = "";
		std::cout << msg;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}
		if (input.empty())
			continue;
		if (isValidPhoneNumber(input))
			break;
		std::cout << red << "Please enter a valid phone number" << reset << std::endl;
	}
	return (input);
}

void	Contact::printLineContact(void)
{
	if (this->index == -1)
		return ;
	std::cout << boldyellow << "|" << reset;
	std::cout << std::setw(10) << (this->index + 1) << "|";
	if (this->firstName_.length() > 10)
		std::cout << this->firstName_.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->firstName_ << "|";
	if (this->lastName_.length() > 10)
		std::cout << this->lastName_.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->lastName_ << "|";
	if (this->nickname_.length() > 10)
		std::cout << this->nickname_.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->nickname_ << boldyellow << "|" << reset;
	return ;
}

void	Contact::printFullInfos(void)
{
	if (this->index == -1)
	{
		std::cout << red << "This contact doesn't exist 😖" << reset << std::endl;
		return ;
	}
	std::cout << green << "=============== [CONTACT nº" << (this->index + 1) << "] ===============" << reset << std::endl;
	std::cout << green << "First name: \t" << this->firstName_ << reset << std::endl;
	std::cout << green << "Last name: \t" << this->lastName_ << reset << std::endl;
	std::cout << green << "Nickname: \t" << this->nickname_ << reset << std::endl;
	std::cout << green << "Phone number: \t" << this->phoneNumber_ << reset << std::endl;
	std::cout << green << "Darkest secret:" << std::endl << this->darkestSecret_ << reset << std::endl;
	return ;
}
