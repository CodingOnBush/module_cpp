/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:08:41 by momrane           #+#    #+#             */
/*   Updated: 2024/06/11 18:18:12 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << CYAN << "[DOG] constructor" << RESET << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& obj)
{
	std::cout << CYAN << "[DOG] copy constructor" << RESET << std::endl;
	if (this == &obj)
		return ;
	this->type = obj.type;
	this->brain = new Brain(*obj.brain);
}

Dog &Dog::operator=(const Dog& obj)
{
	std::cout << CYAN << "[DOG] assignation operator" << RESET << std::endl;
	if (this == &obj)
		return (*this);
	this->type = obj.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*obj.brain);
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << CYAN << "[DOG] destructor" << RESET << std::endl;
	delete this->brain;
}

void Dog::makeSound(void) const
{
	std::cout << CYAN << "[DOG] : Woof Woof" << RESET << std::endl;
}
