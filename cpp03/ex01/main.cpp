/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:59:24 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 12:01:11 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	{
		ClapTrap	clap("clapisto");
		
		clap.takeDamage(10);
		clap.beRepaired(10);
		clap.attack("player");
	}
	std::cout << std::endl << std::endl;
	{
		ScavTrap	scav("scavisto");

		scav.takeDamage(10);
		scav.beRepaired(10);
		scav.attack("player");
		scav.guardGate();
	}
	return (0);
}
