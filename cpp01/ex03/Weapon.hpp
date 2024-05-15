/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:13:50 by momrane           #+#    #+#             */
/*   Updated: 2024/05/15 13:19:56 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string	type_;
	
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string		getType(void) const;
		void			setType(std::string type);
};

#endif