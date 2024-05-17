/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:18:21 by momrane           #+#    #+#             */
/*   Updated: 2024/05/16 17:18:22 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string name) : name_(name)
{
	std::cout << this->name_ << ": has been created (born)." << std::endl;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->name_ << ": has been destroyed (killed)." << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
