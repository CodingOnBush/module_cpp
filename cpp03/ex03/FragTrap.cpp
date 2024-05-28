/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:05:26 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 12:06:34 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout
		<< "[FRAG] \tdefault constructor called."
	<< std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name_ = name;
	this->hitPoints_ = 100;
	this->energyPoints_ = 100;
	this->attackDamage_ = 30;
	std::cout
		<< "[FRAG] \tconstructor called with (" << this->name_ << ")."
	<< std::endl;
}

FragTrap::FragTrap(FragTrap const & obj)
{
	this->name_ = obj.name_;
	this->hitPoints_ = obj.hitPoints_;
	this->energyPoints_ = obj.energyPoints_;
	this->attackDamage_ = obj.attackDamage_;
}

FragTrap::~FragTrap(void)
{
	std::cout
		<< "[FRAG] \tdestructor called for (" << this->name_ << ")."
	<< std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & obj)
{
	this->name_ = obj.name_;
	this->hitPoints_ = obj.hitPoints_;
	this->energyPoints_ = obj.energyPoints_;
	this->attackDamage_ = obj.attackDamage_;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout
		<< "[FRAG] \tHigh fives request from (" << this->name_ << ")."
	<< std::endl;
}
