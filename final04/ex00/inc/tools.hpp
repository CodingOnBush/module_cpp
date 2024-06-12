/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:58:53 by momrane           #+#    #+#             */
/*   Updated: 2024/06/12 14:17:51 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_HPP
# define TOOLS_HPP

# include <iostream>

# define YELLOW		"\033[33m"
# define CYAN		"\033[36m"
# define RED		"\033[31m"
# define MAGENTA	"\033[35m"
# define RESET		"\033[0m"

const void	printLog
(
	const std::string color,
	const std::string who,
	const std::string msg
);

const void	print
(
	const std::string color,
	const std::string msg
);

#endif