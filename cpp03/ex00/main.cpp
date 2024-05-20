/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:59:24 by momrane           #+#    #+#             */
/*   Updated: 2024/05/20 17:40:44 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	luffy("Luffy");
	ClapTrap	zoro("Zoro");

	luffy.attack("Zoro");
	zoro.takeDamage(0);
	
	for (size_t i = 1; i < 15; i++)
	{
		luffy.attack("Zoro");
		zoro.takeDamage(0);
		if (i % 2 == 0)
			zoro.beRepaired(1);
	}
	
	return (0);
}
