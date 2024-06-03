/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 09:06:45 by momrane           #+#    #+#             */
/*   Updated: 2024/06/03 15:04:57 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character : public ICharacter
{
	private:
		std::string		name_;
		AMateria*		inventory_[4];
		int				count_;

	public:
		Character();									// default constructor
		Character(Character const & obj);				// copy constructor
		Character & operator=(Character const & obj);	// assignation operator
		virtual ~Character();							// destructor
		
		Character(std::string const & name);

		std::string const &	getName() const;
		void 				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif