/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:21:46 by momrane           #+#    #+#             */
/*   Updated: 2024/05/06 09:45:25 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

static void	ft_upper_this_str(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
	{
		if (std::islower(str[i]))
			str[i] = std::toupper(str[i]);
		i++;
	}
}

static void	ft_megaphone(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_upper_this_str(av[i]);
		std::cout << av[i];
		i++;
	}
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		ft_megaphone(ac, av);
	return (0);
}
