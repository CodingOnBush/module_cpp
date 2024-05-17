/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:51:12 by momrane           #+#    #+#             */
/*   Updated: 2024/05/17 19:10:44 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPoint(0) {}

Fixed::Fixed( const Fixed &rhs )
{
	*this = rhs;
}

Fixed::~Fixed( void ) {}

Fixed	&Fixed::operator=( const Fixed &rhs )
{
	*this = rhs;
	return (*this);	
}
