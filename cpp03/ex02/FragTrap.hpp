/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:58:53 by momrane           #+#    #+#             */
/*   Updated: 2024/05/26 19:32:12 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

class FragTrap
{
	protected:
		std::string	name_;
		int			hitpoints_;
		int			energyPoints_;
		int			attackDamage_;

	public:
		FragTrap( void );								// default constructor
		FragTrap( FragTrap const & obj );				// copy constructor
		FragTrap & operator=( FragTrap const & obj );	// assignation operator
		~FragTrap( void );								// destructor
		
		FragTrap( const std::string name );
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif