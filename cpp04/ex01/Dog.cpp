/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:08:41 by momrane           #+#    #+#             */
/*   Updated: 2024/06/02 18:26:28 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << CYAN << "[DOG] constructor" << RESET << std::endl;
}

Dog::Dog(const Dog& obj)
{
	std::cout << CYAN << "[DOG] copy constructor" << RESET << std::endl;
	*this = obj;
}

Dog &Dog::operator=(const Dog& obj)
{
	std::cout << CYAN << "[DOG] assignation operator" << RESET << std::endl;
	this->type = obj.type;

	// It's a shallow copy (wrong) :
	// this->brain = obj.brain;

	// It's a deep copy (correct) :
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
