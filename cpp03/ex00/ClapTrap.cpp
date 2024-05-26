/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:05:26 by momrane           #+#    #+#             */
/*   Updated: 2024/05/26 10:16:10 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : 
	name_(name),
	hitpoints_(10),
	energyPoints_(10),
	attackDamage_(0)
{
	std::cout
		<< "ClapTrap (" << this->name_ << ") constructor"
	<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {*this = src;}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	if (this != &src)
	{
		this->hitpoints_ = src.hitpoints_;
		this->energyPoints_ = src.energyPoints_;
		this->attackDamage_ = src.attackDamage_;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout
		<< "ClapTrap (" << this->name_ << ") destructor called."
	<< std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	if (this->hitpoints_ <= 0 || this->energyPoints_ <= 0)
		return ;
	this->energyPoints_--;
	std::cout
		<< YELLOW
		<< "ClapTrap " 	<< this->name_ 
		<< " attacks " << target 
		<< ", causing " << this->attackDamage_ << " points of damage!" 
		<< RESET
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout 
		<< RED
		<< "ClapTrap " 	<< this->name_ 
		<< " take " << amount << " points of damage!" 
		<< RESET
	<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints_ <= 0 || this->energyPoints_ <= 0)
		return ;
	this->hitpoints_ += amount;
	this->energyPoints_--;
	std::cout
		<< GREEN
		<< "ClapTrap " 	<< this->name_ 
		<< " be repaired for " << amount << " points!" 
		<< RESET
	<< std::endl;
}
