/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:05:11 by momrane           #+#    #+#             */
/*   Updated: 2024/05/16 17:15:05 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie( void )
{
	std::cout << "A zombie has been created." << std::endl;
	return;
}

Zombie::Zombie(std::string name) : name_(name)
{
	std::cout << "A zombie (" << name << ") has been created." << std::endl;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "A zombie (" << this->name_ << ") has been destroyed." << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->name_ = name;
	return ;
}