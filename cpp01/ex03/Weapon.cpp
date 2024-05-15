/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:15:19 by momrane           #+#    #+#             */
/*   Updated: 2024/05/15 13:25:04 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type)
{
	this->type_ = type;
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string	Weapon::getType(void) const
{
	return (this->type_);
}

void	Weapon::setType(std::string type)
{
	this->type_ = type;
	return ;
}
