/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:51:12 by momrane           #+#    #+#             */
/*   Updated: 2024/05/25 18:14:23 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : rawValue_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &rhs )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed &	Fixed::operator=( const Fixed &rhs )
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->rawValue_ = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->rawValue_);
}

void	Fixed::setRawBits( int const raw )
{
	this->rawValue_ = raw;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->rawValue_ = value << this->fractionalBits_;
}

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->rawValue_ = roundf(value * (1 << this->fractionalBits_));
}

float Fixed::toFloat(void) const
{
	float	floatResult = this->rawValue_ / (float)(1 << this->fractionalBits_);
	return (floatResult);
}

int Fixed::toInt(void) const
{
	int	intResult = this->rawValue_ / (1 << this->fractionalBits_);
	return (intResult);
}

std::ostream & operator<<( std::ostream &o, const Fixed &rhs )
{
	o << rhs.toFloat();
	return (o);
}
