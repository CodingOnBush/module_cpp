/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:59:24 by momrane           #+#    #+#             */
/*   Updated: 2024/05/26 10:15:49 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	luffy("Luffy");
	ClapTrap	arlong("Arlong");

	luffy.attack("Arlong");
	arlong.takeDamage(0);
	
	for (size_t i = 1; i < 15; i++)
	{
		luffy.attack("Arlong");
		arlong.takeDamage(0);
		if (i % 2 == 0)
			arlong.beRepaired(1);
	}
	return (0);
}
