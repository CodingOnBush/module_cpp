/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:05:21 by momrane           #+#    #+#             */
/*   Updated: 2024/05/16 15:16:55 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include "colors.h"

class Harl
{
	private:
		void	debug_(void);
		void	info_(void);
		void	warning_(void);
		void	error_(void);
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
};

#endif