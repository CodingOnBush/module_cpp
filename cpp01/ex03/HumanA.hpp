/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 07:54:53 by momrane           #+#    #+#             */
/*   Updated: 2024/05/16 17:34:05 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
	private:
		std::string	name_;
		Weapon&		weapon_;
	
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA( void );
		void	attack( void );
};

#endif