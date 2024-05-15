/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:05:16 by momrane           #+#    #+#             */
/*   Updated: 2024/05/14 17:05:17 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*horde;

	if (N <= 0)
		return (NULL);
	horde = new Zombie[N];
	if (!horde)
		return (NULL);
	while (N--)
		horde[N].setName(name);
	return (horde);
}
