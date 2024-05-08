#include "../inc/phonebook.hpp"

static void	welcome(void)
{
	// std::string	msg = "Welcome in this awesome Phone Book 🌸";
	std::cout << boldyellow << "╔===========================================╗" << reset << std::endl;
	std::cout << boldyellow << "║   Welcome in this awesome Phone Book 🌸   ║" << reset << std::endl;
	std::cout << boldyellow << "╚===========================================╝" << reset << std::endl;
	return ;
}

static void	goodbye(void)
{
	std::string	msg = "============== GOODBYE 👋👋👋 ===============";
	std::cout << boldyellow << msg << reset << std::endl;
	return ;
}

static void	printUsage(void)
{
	std::cout << "╔=========== Commands available ============╗" << reset << std::endl;
	std::cout << "║ ADD    : Add a new contact                ║" << reset << std::endl;
	std::cout << "║ SEARCH : Search a contact                 ║" << reset << std::endl;
	std::cout << "║ EXIT   : Exit the Phone Book              ║" << reset << std::endl;
	std::cout << "╚===========================================╝" << reset << std::endl;
	return ;
}

PhoneBook::PhoneBook(void)
{
	this->added_ = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::printPhoneBook_(void)
{
	bool	emptyList = true;
	std::cout << boldyellow << "╔============ YOUR PHONE BOOK ! ============╗" << reset << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		this->contacts_[i].printLineContact();
		if (this->contacts_[i].index != -1)
		{
			emptyList = false;
			std::cout << std::endl;
		}
	}
	if (emptyList)
		std::cout << "          The Phone Book is empty.           " << std::endl;
	std::cout << boldyellow << "╚===========================================╝" << reset << std::endl;
	return ;
}

void	PhoneBook::addContact_(void)
{
	int	index;

	std::cout << boldblue << "========== Adding a new contact... ==========" << reset << std::endl;
	index = this->added_ % 8;
	this->added_++;
	this->contacts_[index].initNewContact_();
	this->contacts_[index].updateIndex(index);
	std::cout << boldblue << "=============================================" << reset << std::endl;
	return ;
}

void	PhoneBook::seachContact_(void)
{
	std::string	input = "";
	int			index;

	printPhoneBook_();
	std::cout << boldblue << "========= Searching a new contact... ========" << reset << std::endl;
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
		this->contacts_[index - 1].printFullInfos();
	std::cout << boldblue << "=============================================" << reset << std::endl;
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
			this->addContact_();
		else if (!input.compare("SEARCH"))
			this->seachContact_();
		else if (!input.empty())
		{
			std::cout << red << "Please enter a valid command 😊" << reset << std::endl;
			printUsage();
		}
	}
	goodbye();
}
