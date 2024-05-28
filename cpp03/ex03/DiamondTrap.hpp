/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:58:53 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 13:44:26 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include <iostream>

// # define CYAN "\033[0;36m"
# define RESET "\033[0m"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	name_;

	public:
		DiamondTrap(void);									// default constructor
		DiamondTrap(DiamondTrap const & obj);				// copy constructor
		DiamondTrap & operator=(DiamondTrap const & obj);	// assignation operator
		~DiamondTrap( void );								// destructor
		
		DiamondTrap(std::string name);
		
		void	attack(const std::string& target);
		void	whoAmI(void);
};

#endif