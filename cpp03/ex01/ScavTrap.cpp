/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:44:10 by momrane           #+#    #+#             */
/*   Updated: 2024/05/21 09:24:17 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout
		<< "ScavTrap default constructor"
	<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->setName(name);
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout
		<< "ScavTrap "
		<< name
		<< " constructor"
	<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout
		<< "ScavTrap "
		<< this->getName()
		<< " copy constructor"
	<< std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout
		<< "ScavTrap "
		<< this->getName()
		<< " destructor"
	<< std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	this->ClapTrap::operator=(src);
	return (*this);
}

void ScavTrap::guardGate(void)
{
	std::cout
		<< "ScavTrap "
		<< this->getName()
		<< " have enterred in Gate keeper mode."
	<< std::endl;
}
