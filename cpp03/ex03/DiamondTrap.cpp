/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:05:26 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 12:17:18 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout
		<< CYAN
		<< "[FRAG] \tdefault constructor called."
		<< RESET
	<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name_ = name + "_clap_name";
	std::cout
		<< CYAN
		<< "[FRAG] \tconstructor called with (" << this->name_ << ")."
		<< RESET
	<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & obj)
{
	*this = obj;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout
		<< CYAN
		<< "[FRAG] \tdestructor called for (" << this->name_ << ")."
		<< RESET
	<< std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & obj)
{
	this->name_ = obj.name_;
	return (*this);
}

void	DiamondTrap::highFivesGuys(void)
{
	std::cout
		<< CYAN
		<< "[FRAG] \tHigh fives guys started with (" << this->name_ << ")."
		<< RESET
	<< std::endl;
}
