/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:44:10 by momrane           #+#    #+#             */
/*   Updated: 2024/05/26 15:46:16 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout
		<< BLUE
		<< "SCAV \tdefault constructor"
		<< RESET
	<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name_ = name;
	this->hitpoints_ = 100;
	this->energyPoints_ = 50;
	this->attackDamage_ = 20;
	std::cout
		<< BLUE
		<< "SCAV \t("
		<< name
		<< ") constructor"
		<< RESET
	<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & obj) : ClapTrap(obj)
{
	std::cout
		<< BLUE
		<< "SCAV \t"
		<< this->name_
		<< " copy constructor"
		<< RESET
	<< std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout
		<< BLUE
		<< "SCAV \t("
		<< this->name_
		<< ") destructor"
		<< RESET
	<< std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & obj)
{
	this->ClapTrap::operator=(obj);
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout
		<< BLUE
		<< "SCAV \t("
		<< this->name_
		<< ") have enterred in Gate keeper mode."
		<< RESET
	<< std::endl;
}
