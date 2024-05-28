/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:05:26 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 11:31:59 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : 
	name_(name),
	hitPoints_(10),
	energyPoints_(10),
	attackDamage_(0)
{
	std::cout << "ClapTrap (" << this->name_ << ") constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	*this = obj;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	this->hitPoints_ = obj.hitPoints_;
	this->energyPoints_ = obj.energyPoints_;
	this->attackDamage_ = obj.attackDamage_;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap (" << this->name_ << ") destructor called." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints_ <= 0 || this->energyPoints_ <= 0)
	{
		std::cout
			<< "ClapTrap " 	<< this->name_ 
			<< " can't attack!"
		<< std::endl;	
		return ;
	}
	this->energyPoints_--;
	std::cout
		<< "ClapTrap " 	<< this->name_ 
		<< " attacks " << target 
		<< ", causing " << this->attackDamage_ << " points of damage!" 
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout
		<< "ClapTrap " 	<< this->name_ 
		<< " take " << amount << " points of damage!" 
	<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints_ <= 0 || this->energyPoints_ <= 0)
	{
		std::cout
			<< "ClapTrap " 	<< this->name_ 
			<< " can't be repaired!"
		<< std::endl;
		return ;
	}
	this->hitPoints_ += amount;
	this->energyPoints_--;
	std::cout
		<< "ClapTrap " 	<< this->name_ 
		<< " be repaired for " << amount << " points!" 
	<< std::endl;
}
