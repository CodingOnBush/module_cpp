/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:51:40 by momrane           #+#    #+#             */
/*   Updated: 2024/06/12 08:41:42 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define GREEN	"\033[32m"
# define RESET	"\033[0m"

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain(void);						// default constructor
		Brain(const Brain& obj);			// copy constructor
		Brain &operator=(const Brain& obj);	// assignation operator
		~Brain(void);						// destructor
};

#endif