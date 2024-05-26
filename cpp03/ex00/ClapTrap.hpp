/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:58:53 by momrane           #+#    #+#             */
/*   Updated: 2024/05/26 10:59:59 by allblue          ###   ########.fr       */
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
		const std::string	name_;
		int					hitpoints_;
		int					energyPoints_;
		int					attackDamage_;

	public:
		ClapTrap(void);								// default constructor
		ClapTrap(const std::string name);
		ClapTrap(ClapTrap const & src);				// copy constructor
		ClapTrap & operator=(ClapTrap const & src);	// assignation operator overload
		~ClapTrap(void);							// destructor
		
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif