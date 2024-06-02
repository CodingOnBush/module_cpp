/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:58:53 by momrane           #+#    #+#             */
/*   Updated: 2024/06/02 10:31:25 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define MAGENTA	"\e[1;35m"
# define RESET		"\033[0m"

class ClapTrap
{
	private:
		std::string	name_;
		int			hitPoints_;
		int			energyPoints_;
		int			attackDamage_;

	public:
		ClapTrap(void);								// default constructor
		ClapTrap(const ClapTrap& obj);				// copy constructor
		ClapTrap &operator=(const ClapTrap& obj);	// assignation operator overload
		~ClapTrap(void);							// destructor
		
		ClapTrap(std::string name);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif