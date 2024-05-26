/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:59:24 by momrane           #+#    #+#             */
/*   Updated: 2024/05/26 15:49:36 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
// 		sanji.takeDamage(nami.getAttackDamage());
// 		if (i % 2 == 0)
// 			sanji.beRepaired(1);
// 	}
// }

int main(void)
{
	ClapTrap	clap("mich");
	ScavTrap	scav("juju");

	clap.attack("juju");
	scav.attack("mich");
	return (0);
}
