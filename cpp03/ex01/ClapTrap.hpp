/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:58:53 by momrane           #+#    #+#             */
/*   Updated: 2024/05/26 15:50:05 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

class ClapTrap
{
	protected:
		std::string	name_;
		int			hitpoints_;
		int			energyPoints_;
		int			attackDamage_;

	public:
		ClapTrap( void );								// default constructor
		ClapTrap( ClapTrap const & obj );				// copy constructor
		ClapTrap & operator=( ClapTrap const & obj );	// assignation operator
		virtual ~ClapTrap( void );								// destructor
		
		ClapTrap( const std::string name );
		virtual void	attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		// std::string	getName(void) const;
		// void		setName(std::string name);
		// void		setHitpoints(int hitpoints);
		// void		setEnergyPoints(int energyPoints);
		// void		setAttackDamage(int attackDamage);
		int			getAttackDamage(void) const;
};

#endif