/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:05:26 by momrane           #+#    #+#             */
/*   Updated: 2024/05/26 19:28:59 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout
		<< BLUE
		<< "[CLAP] \tdefault constructor called."
		<< RESET
	<< std::endl;
}

ClapTrap::ClapTrap(const std::string name) : 
	name_(name),
	hitpoints_(10),
	energyPoints_(10),
	attackDamage_(0)
{
	std::cout
		<< BLUE
		<< "[CLAP] \tconstructor called with (" << this->name_ << ")."
		<< RESET
	<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & obj)
{
	*this = obj;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & obj)
{
	this->hitpoints_ = obj.hitpoints_;
	this->energyPoints_ = obj.energyPoints_;
	this->attackDamage_ = obj.attackDamage_;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout
		<< BLUE
		<< "[CLAP] \tdestructor called for (" << this->name_ << ")."
		<< RESET
	<< std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	if (this->hitpoints_ > 0 && this->energyPoints_ > 0)
	{
		this->energyPoints_--;
		std::cout
			<< BLUE
			<< "[CLAP] \t" << this->name_ << " attack " << target << " causing " << this->attackDamage_ << " points of damage!"
			<< RESET
		<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitpoints_ -= amount;
	std::cout
		<< BLUE
		<< "[CLAP] \t" << this->name_ << " take " << amount << " points of damage!"
		<< RESET
	<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints_ > 0 && this->energyPoints_ > 0)
	{
		this->hitpoints_ += amount;
		this->energyPoints_--;
		std::cout
			<< BLUE 
			<< "[CLAP] \t" << this->name_ << " be repaired for " << amount << " points!"
			<< RESET
		<< std::endl;
	}
}
