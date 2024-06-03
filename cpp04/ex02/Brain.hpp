/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:51:40 by momrane           #+#    #+#             */
/*   Updated: 2024/06/02 18:38:00 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define GREEN	"\033[32m"
# define RESET	"\033[0m"

class Brain
{
	protected:
		std::string	ideas[100];

	public:
		Brain(void);						// default constructor
		Brain(const Brain& obj);			// copy constructor
		Brain &operator=(const Brain& obj);	// assignation operator
		~Brain(void);						// destructor
};

#endif