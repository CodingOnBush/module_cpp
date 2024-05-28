/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:58:53 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 11:33:00 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

// #define RED "\033[0;31m"
// #define GREEN "\033[0;32m"
// #define YELLOW "\033[0;33m"
// #define BLUE "\033[0;34m"
// #define RESET "\033[0m"

class ClapTrap
{
	private:
		const std::string	name_;
		int					hitPoints_;
		int					energyPoints_;
		int					attackDamage_;

	public:
		ClapTrap(void);								// default constructor
		ClapTrap(const ClapTrap& obj);				// copy constructor
		ClapTrap &operator=(const ClapTrap& obj);	// assignation operator overload
		~ClapTrap(void);							// destructor
		
		ClapTrap(const std::string name);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif