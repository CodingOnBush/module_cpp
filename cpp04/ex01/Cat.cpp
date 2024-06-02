/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:05:10 by momrane           #+#    #+#             */
/*   Updated: 2024/06/02 18:26:20 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << YELLOW << "[CAT] constructor" << RESET << std::endl;
}

Cat::Cat(const Cat& obj)
{
	std::cout << YELLOW << "[CAT] copy constructor" << RESET << std::endl;
	*this = obj;
}

Cat &Cat::operator=(const Cat& obj)
{
	std::cout << YELLOW << "[CAT] assignation operator" << RESET << std::endl;
	this->type = obj.type;
	// It's a shallow copy (wrong) :
	// this->brain = obj.brain;

	// It's a deep copy (correct) :
	this->brain = new Brain(*obj.brain);
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << YELLOW << "[CAT] destructor" << RESET << std::endl;
	delete this->brain;
}

void Cat::makeSound(void) const
{
	std::cout << YELLOW << "[CAT] : Miaou Miaou" << RESET << std::endl;
}
