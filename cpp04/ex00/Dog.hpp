/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:08:07 by momrane           #+#    #+#             */
/*   Updated: 2024/05/28 17:07:17 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

# define CYAN	"\033[36m"
# define RESET	"\033[0m"

class Dog: public Animal
{
	public:
		Dog(void);						// default constructor
		Dog(const Dog& obj);			// copy constructor
		Dog &operator=(const Dog& obj);	// assignation operator
		~Dog(void);						// destructor

		void	makeSound(void) const;
};

#endif