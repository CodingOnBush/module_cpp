/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:05:10 by momrane           #+#    #+#             */
/*   Updated: 2024/06/12 09:33:02 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << YELLOW << "[CAT] constructor" << RESET << std::endl;
	this->_type = "Cat";
	try
	{
		this->_brain = new Brain();
	}
	catch(const std::exception& e)
	{
		std::cout << "Brain creation failed : " << e.what() << '\n';
	}
}

Cat::Cat(const Cat& obj)
{
	std::cout << YELLOW << "[CAT] copy constructor" << RESET << std::endl;
	if (this == &obj)
		return ;
	this->_type = obj._type;
	try
	{
		this->_brain = new Brain(*obj._brain);
	}
	catch(const std::exception& e)
	{
		std::cout << "Brain creation failed : " << e.what() << '\n';
	}
}

Cat &Cat::operator=(const Cat& obj)
{
	std::cout << YELLOW << "[CAT] assignation operator" << RESET << std::endl;
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	if (this->_brain)
		delete this->_brain;
	try
	{
		this->_brain = new Brain(*obj._brain);
	}
	catch(const std::exception& e)
	{
		std::cout << "Brain creation failed : " << e.what() << '\n';
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << YELLOW << "[CAT] destructor" << RESET << std::endl;
	delete this->_brain;
}

void Cat::makeSound(void) const
{
	std::cout << YELLOW << "[CAT] : Meow Meow" << RESET << std::endl;
}
