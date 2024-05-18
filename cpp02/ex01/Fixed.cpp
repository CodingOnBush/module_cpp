/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:51:12 by momrane           #+#    #+#             */
/*   Updated: 2024/05/18 11:58:23 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : fixedPoint_(0)
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
	this->fixedPoint_ = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint_);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixedPoint_ = raw;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint_ = value * pow(2, this->fractionalBits_);
	std::cout << "fixedPoint_ value: " << this->fixedPoint_ << std::endl;
}

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint_ = roundf(value * (1 << this->fractionalBits_));
	std::cout << "fixedPoint_ value: " << this->fixedPoint_ << std::endl;
}

