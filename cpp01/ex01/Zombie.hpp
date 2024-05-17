/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:05:13 by momrane           #+#    #+#             */
/*   Updated: 2024/05/14 17:05:14 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {
	private:
		std::string	name_;

	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );
		void	setName( std::string name );
};

Zombie*	zombieHorde( int N, std::string name );

#endif