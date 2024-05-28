/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:05:26 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 17:07:31 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
	: type("default type")
{
	std::cout << MAGENTA << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal& obj)
{
	std::cout << MAGENTA << "Animal copy constructor called" << RESET << std::endl;
	*this = obj;
}

Animal &Animal::operator=(const Animal& obj)
{
	std::cout << MAGENTA << "Animal assignation operator overload called" << RESET << std::endl;
	this->type = obj.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << MAGENTA << "Animal destructor called" << RESET << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << MAGENTA << "Animal making a sound" << RESET << std::endl;
}
