/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:58:53 by momrane           #+#    #+#             */
/*   Updated: 2024/05/21 09:29:05 by momrane          ###   ########.fr       */
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
	private:
		std::string	name_;
		int			hitpoints_;
		int			energyPoints_;
		int			attackDamage_;

	public:
		ClapTrap( void );
		ClapTrap( const std::string name );
		ClapTrap( ClapTrap const & src );
		ClapTrap & operator=( ClapTrap const & src );
		~ClapTrap( void );
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName(void) const;
		void	setName(std::string name);
		void	setHitpoints(int hitpoints);
		void	setEnergyPoints(int energyPoints);
		void	setAttackDamage(int attackDamage);
		int		getAttackDamage(void) const;
};

#endif