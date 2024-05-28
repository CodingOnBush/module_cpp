/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:44:19 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 13:41:56 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

// # define RED	"\033[0;31m"
// # define GREEN	"\033[0;32m"
// # define YELLOW	"\033[0;33m"
// # define BLUE	"\033[0;34m"
// # define RESET	"\033[0m"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);								// default constructor
		ScavTrap(const ScavTrap& obj);				// copy constructor
		ScavTrap & operator=(const ScavTrap& obj);	// assignation operator
		~ScavTrap(void);							// destructor

		ScavTrap(std::string name);
		
		void	attack(const std::string& target);
		void	guardGate(void);
};



#endif