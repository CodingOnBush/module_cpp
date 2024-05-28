/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:08:41 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 18:38:16 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << CYAN << "Dog constructor" << RESET << std::endl;
}

Dog::Dog(const Dog& obj)
{
	std::cout << CYAN << "Dog copy constructor" << RESET << std::endl;
	*this = obj;
}

Dog &Dog::operator=(const Dog& obj)
{
	std::cout << CYAN << "Dog assignation operator" << RESET << std::endl;
	this->type = obj.type;
	this->brain = obj.brain;
	return (*this);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << CYAN << "Dog destructor" << RESET << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << CYAN << "Dog : Woof Woof" << RESET << std::endl;
}
