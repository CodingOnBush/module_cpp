/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:21:50 by momrane           #+#    #+#             */
/*   Updated: 2024/06/11 11:39:53 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type_;	// Type of materia
	
	public:
		AMateria();									// Default constructor
		AMateria(AMateria const & obj);				// Copy constructor
		AMateria & operator=(AMateria const & obj);	// Copy assignment operator
		virtual ~AMateria();						// Destructor

		AMateria(std::string const & type);				// from subject
		
		std::string const &	getType(void) const;		// from subject

		virtual AMateria*	clone(void) const = 0;		// from subject
		virtual void		use(ICharacter &target);	// from subject
};

#endif