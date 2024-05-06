/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:21:46 by momrane           #+#    #+#             */
/*   Updated: 2024/05/06 18:35:40 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void	megaphone(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
			std::cout << (char)toupper(av[i][j]);
		i++;
	}
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		megaphone(ac, av);
	return (0);
}
