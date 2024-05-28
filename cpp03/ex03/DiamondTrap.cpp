/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:05:26 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 13:49:23 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->hitPoints_ = FragTrap::hitPoints_;
	this->energyPoints_ = ScavTrap::energyPoints_;
	this->attackDamage_ = FragTrap::attackDamage_;
	std::cout << "[DIAM] \tdefault constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	*this = obj;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[DIAM] \tdestructor called for (" << this->name_ << ")." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name_ = name;
	ClapTrap::name_ = name + "_clap_name";
	std::cout << "[DIAM] \tconstructor called with (" << this->name_ << ")." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
	this->name_ = obj.name_;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout
		<< "[DIAM] \tMy name is " << this->name_
		<< " and my ClapTrap name is " << ClapTrap::name_
	<< std::endl;
}
