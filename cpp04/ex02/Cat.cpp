/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:05:10 by momrane           #+#    #+#             */
/*   Updated: 2024/06/12 09:43:30 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << YELLOW << "[CAT] constructor" << RESET << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
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
	// this->brain = obj.brain; // It's a shallow copy (wrong)
	this->brain = new Brain(*obj.brain); // It's a deep copy (correct)
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
