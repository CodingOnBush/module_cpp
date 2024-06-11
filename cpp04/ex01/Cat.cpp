/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:05:10 by momrane           #+#    #+#             */
/*   Updated: 2024/06/11 18:19:04 by momrane          ###   ########.fr       */
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
	if (this == &obj)
		return ;
	this->type = obj.type;
	this->brain = new Brain(*obj.brain);
}

Cat &Cat::operator=(const Cat& obj)
{
	std::cout << YELLOW << "[CAT] assignation operator" << RESET << std::endl;
	if (this == &obj)
		return (*this);
	this->type = obj.type;
	if (this->brain)
		delete this->brain;
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
