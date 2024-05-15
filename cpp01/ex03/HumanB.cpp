/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 07:59:55 by momrane           #+#    #+#             */
/*   Updated: 2024/05/15 13:52:12 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : 
	name_(name),
	weapon_(NULL)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::attack(void)
{
	std::cout
		<< this->name_
		<< " attacks with their "
		<< this->weapon_->getType()
	<< std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon_ = &weapon;
}
