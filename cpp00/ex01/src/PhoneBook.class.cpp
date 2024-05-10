#include "../inc/ex01.hpp"

static void	welcome(void)
{
	std::cout << boldyellow << "╔═══════════════════════════════════════════╗" << reset << std::endl;
	std::cout << boldyellow << "║   Welcome in this awesome Phone Book 🌸   ║" << reset << std::endl;
	std::cout << boldyellow << "╚═══════════════════════════════════════════╝" << reset << std::endl;
	return ;
}

static void	goodbye(void)
{
	std::string	msg = "══════════════ GOODBYE 👋👋👋 ═══════════════";
	std::cout << boldyellow << msg << reset << std::endl;
	return ;
}

static void	printUsage(void)
{
	std::cout << "╔═══════════ Commands available ════════════╗" << reset << std::endl;
	std::cout << "║ ADD    : Add a new contact                ║" << reset << std::endl;
	std::cout << "║ SEARCH : Search a contact                 ║" << reset << std::endl;
	std::cout << "║ EXIT   : Exit the Phone Book              ║" << reset << std::endl;
	std::cout << "╚═══════════════════════════════════════════╝" << reset << std::endl;
	return ;
}

PhoneBook::PhoneBook(void)
{
	this->_added = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::_printPhoneBook(void)
{
	std::cout << boldyellow << "╔══════════╦═ YOUR PHONE BOOK ! ═╦══════════╗" << reset << std::endl;
	std::cout << boldyellow << "║   index  ║firstname ║ lastname ║ nickname ║" << reset << std::endl;
	std::cout << boldyellow << "╠══════════╬══════════╬══════════╬══════════╣" << reset << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		if (this->_added % 8 == (int)i && this->_added != 0)
		{
			std::cout << boldyellow << "║" << reset;
			std::cout << std::setw(10) << i << boldyellow << "║" << reset;
			this->_contacts[i - 1].printLineContact();
			std::cout << std::endl;
		}
	}
	if (this->_added == 0)
		std::cout << "          The Phone Book is empty.           " << std::endl;
	std::cout << boldyellow << "╚══════════╩══════════╩══════════╩══════════╝" << reset << std::endl;
	return ;
}

void	PhoneBook::_addContact(void)
{
	int	index;

	std::cout << boldblue << "══════════ Adding a new contact... ══════════" << reset << std::endl;
	index = this->_added % 8;
	this->_added++;
	this->_contacts[index].fillContact();
	std::cout << boldblue << "═════════════════════════════════════════════" << reset << std::endl;
	return ;
}

void	PhoneBook::_searchContact(void)
{
	std::string	input = "";
	int			index;

	_printPhoneBook();
	std::cout << boldblue << "═════════ Searching a new contact... ════════" << reset << std::endl;
	while (1)
	{
		std::cout << "Enter the index you want to seach :";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return ;
		}
		if (input.length() != 1 || !std::isdigit(input[0]))
		{
			std::cout << "Please entre a single number between 1 and 8" << std::endl;
			continue;
		}
		index = std::stoi(input);
		if (index >= 1 && index <= 8)
			break;
	}
	if (index >= 0 && index <= 8)
	{
		if (this->_added % 8 != index)
			std::cout << red << "This contact doesn't exist 😖" << reset << std::endl;
		else
		{
			std::cout << green << "═══════════════ [CONTACT nº" << index << "] ═══════════════" << reset << std::endl;
			this->_contacts[index - 1].printFullInfos();
		}
	}
	std::cout << boldblue << "═════════════════════════════════════════════" << reset << std::endl;
}

void	PhoneBook::launchApp(void)
{
	std::string	input;

	welcome();
	printUsage();
	while (!std::cin.eof())
	{
		std::cout << boldyellow << "Please, enter a command > " << reset;
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("EXIT"))
		{
			std::cout << std::endl;
			break;
		}
		else if (!input.compare("ADD"))
			this->_addContact();
		else if (!input.compare("SEARCH"))
			this->_searchContact();
		else if (!input.empty())
		{
			std::cout << red << "Please enter a valid command 😊" << reset << std::endl;
			printUsage();
		}
	}
	goodbye();
}
