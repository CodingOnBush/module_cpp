#include "../inc/phonebook.hpp"

static void	handle_input(std::string input)
{
	if (!input.compare("ADD"))
	{
		std::cout << "ADD" << std::endl;
	}
	else if (!input.compare("SEARCH"))
	{
		std::cout << "SEARCH" << std::endl;
	}
}

int	main(void)
{
	PhoneBook	notebook;
	std::string	input;

	notebook.welcome();
	while (!std::cin.eof())
	{
		std::cout << "Entrez une ligne de texte : ";
		std::getline(std::cin, input);
		if (!input.compare(""))
			continue;
		else if (!input.compare("EXIT"))
			break;
		else
			handle_input(input);
	}
	std::cout << std::endl << "EOF of EXIT" << std::endl;
	return (0);
}
