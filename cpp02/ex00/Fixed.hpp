/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:49:57 by momrane           #+#    #+#             */
/*   Updated: 2024/05/17 19:10:44 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_fixedPoint;
	const static int	_fractionalBits = 8;

public:
	Fixed( void );
	Fixed( const Fixed &rhs );
	~Fixed( void );
	Fixed	&operator=( const Fixed &rhs );
};

#endif