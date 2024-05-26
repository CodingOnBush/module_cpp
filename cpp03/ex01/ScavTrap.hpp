/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:44:19 by momrane           #+#    #+#             */
/*   Updated: 2024/05/26 18:36:31 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

# define RED	"\033[0;31m"
# define GREEN	"\033[0;32m"
# define YELLOW	"\033[0;33m"
# define BLUE	"\033[0;34m"
# define RESET	"\033[0m"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);								// default constructor
		ScavTrap(ScavTrap const & obj);				// copy constructor
		ScavTrap & operator=(ScavTrap const & obj);	// assignation operator
		~ScavTrap(void);							// destructor

		ScavTrap(std::string name);
		void	attack(std::string const & target);

		void	guardGate(void);
};



#endif