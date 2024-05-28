/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:59:24 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 13:47:31 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	{
		ClapTrap	clap("clapisto");
	
		clap.attack("clapisto");
		clap.takeDamage(5);
		clap.beRepaired(5);
		clap.attack("player");
	}
	std::cout << std::endl;
	{
		ScavTrap	scav("scavisto");
	
		scav.attack("scavisto");
		scav.takeDamage(5);
		scav.beRepaired(5);
		scav.attack("player");
		scav.guardGate();
	}
	std::cout << std::endl;
	{
		FragTrap	frag("fragisto");
	
		frag.attack("fragisto");
		frag.takeDamage(5);
		frag.beRepaired(5);
		frag.attack("player");
		frag.highFivesGuys();
	}
	std::cout << std::endl;
	{
		DiamondTrap	diamond("diamondisto");
	
		diamond.attack("diamondisto");
		diamond.takeDamage(5);
		diamond.beRepaired(5);
		diamond.attack("player");
		diamond.highFivesGuys();
		diamond.whoAmI();
	}
	return (0);
}
