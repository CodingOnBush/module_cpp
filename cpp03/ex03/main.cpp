/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:59:24 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 14:39:50 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	diamisto("diamisto");
	
	std::cout << std::endl;
	diamisto.attack("diamisto");
	diamisto.takeDamage(5);
	diamisto.beRepaired(5);
	diamisto.attack("player");
	diamisto.highFivesGuys();
	diamisto.whoAmI();
	std::cout << std::endl;
	return (0);
}
