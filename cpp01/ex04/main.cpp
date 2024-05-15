/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:55:50 by momrane           #+#    #+#             */
/*   Updated: 2024/05/15 17:20:20 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "colors.h"

void	replace(std::string *filename, std::string *s1, std::string *s2)
{
	(void)filename;
	(void)s1;
	(void)s2;
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (P(RED, "Usage: ./a.out <filename> <str1> <str2>"), 1);
	replace(av[1], av[2], av[3]);
	return (0);
}
