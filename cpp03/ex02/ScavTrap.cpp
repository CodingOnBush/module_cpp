/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:44:10 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 11:54:42 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->name_ = "";
	this->hitPoints_ = 100;
	this->energyPoints_ = 50;
	this->attackDamage_ = 20;
	std::cout
		<< "[SCAV] \tdefault constructor called."
	<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name_ = name;
	this->hitPoints_ = 100;
	this->energyPoints_ = 50;
	this->attackDamage_ = 20;
	std::cout
		<< "[SCAV] \tconstructor called with (" << this->name_ << ")."
	<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	this->name_ = obj.name_;
	this->hitPoints_ = obj.hitPoints_;
	this->energyPoints_ = obj.energyPoints_;
	this->attackDamage_ = obj.attackDamage_;
}

ScavTrap::~ScavTrap(void)
{
	std::cout
		<< "[SCAV] \tdestructor called for (" << this->name_ << ")."
	<< std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap& obj)
{
	this->ClapTrap::ClapTrap::operator=(obj);
	this->hitPoints_ = obj.hitPoints_;
	this->energyPoints_ = obj.energyPoints_;
	this->attackDamage_ = obj.attackDamage_;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout
		<< "[SCAV] \tGate keeper mode activated for (" << this->name_ << ")."
	<< std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints_ <= 0 || this->energyPoints_ <= 0)
	{
		std::cout
			<< "[SCAV] \t" << this->name_
			<< " can't attack!"
		<< std::endl;
		return ;
	}
	this->energyPoints_--;
	std::cout
		<< "[SCAV] \t" << this->name_
		<< " attack " << target
		<< " causing " << this->attackDamage_ << " points of damage !"
	<< std::endl;
}
