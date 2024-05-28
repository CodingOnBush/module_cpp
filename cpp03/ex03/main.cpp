/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:59:24 by momrane           #+#    #+#             */
/*   Updated: 2024/05/27 13:28:05 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// static void	ex00Test(void)
// {
// 	ClapTrap	luffy("Luffy");
// 	ClapTrap	zoro("Zoro");
// 	luffy.attack("Zoro");
// 	zoro.takeDamage(0);
// 	for (size_t i = 1; i < 6; i++)
// 	{
// 		luffy.attack("Zoro");
// 		zoro.takeDamage(0);
// 		if (i % 2 == 0)
// 			zoro.beRepaired(1);
// 	}
// 	ScavTrap	nami("Nami");
// 	ScavTrap	sanji("Sanji");
// 	nami.guardGate();
// 	sanji.guardGate();
// 	for (size_t i = 1; i < 6; i++)
// 	{
// 		nami.attack("Sanji");
// 		sanji.takeDamage(5);
// 		if (i % 2 == 0)
// 			sanji.beRepaired(1);
// 	}
// }

int main(void)
{
	// ScavTrap	scav("juju");
	FragTrap	frag("jaja");
	
	// scav.attack("mich");
	// scav.guardGate();

	frag.attack("mich");
	frag.highFivesGuys();
	return (0);
}
