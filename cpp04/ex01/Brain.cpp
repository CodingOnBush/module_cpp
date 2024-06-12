/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:51:29 by momrane           #+#    #+#             */
/*   Updated: 2024/06/12 08:41:48 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << GREEN << "[BRAIN] constructor" << RESET << std::endl;
}

Brain::Brain(const Brain& obj)
{
	std::cout << GREEN << "[BRAIN] copy constructor" << RESET << std::endl;
	*this = obj;
}

Brain &Brain::operator=(const Brain& obj)
{
	std::cout << GREEN << "[BRAIN] assignation operator" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << GREEN << "[BRAIN] destructor" << RESET << std::endl;
}