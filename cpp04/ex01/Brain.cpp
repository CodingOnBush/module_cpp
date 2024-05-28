/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:51:29 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 18:34:45 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << GREEN << "Brain constructor" << RESET << std::endl;
}

Brain::Brain(const Brain& obj)
{
	std::cout << GREEN << "Brain copy constructor" << RESET << std::endl;
	*this = obj;
}

Brain &Brain::operator=(const Brain& obj)
{
	std::cout << GREEN << "Brain assignation operator" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << GREEN << "Brain destructor" << RESET << std::endl;
}
