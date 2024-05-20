/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:51:12 by momrane           #+#    #+#             */
/*   Updated: 2024/05/18 20:43:53 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : fixedPoint_(0) {}

Fixed::Fixed( const Fixed &rhs )
{
	*this = rhs;
}

Fixed &	Fixed::operator=( const Fixed &rhs )
{
	this->fixedPoint_ = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {}

int	Fixed::getRawBits(void) const
{
	return (this->fixedPoint_);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixedPoint_ = raw;
}

Fixed::Fixed( const int value )
{
	this->fixedPoint_ = value * pow(2, this->fractionalBits_);
}

Fixed::Fixed( const float value )
{
	this->fixedPoint_ = roundf(value * pow(2, this->fractionalBits_));
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return (this->fixedPoint_ > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return (this->fixedPoint_ < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return (this->fixedPoint_ >= rhs.getRawBits());	
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return (this->fixedPoint_ <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return (this->fixedPoint_ == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return (this->fixedPoint_ != rhs.getRawBits());	
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	Fixed	result;

	result.setRawBits(this->fixedPoint_ + rhs.getRawBits());
	return (result);	
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	Fixed	result;
	
	result.setRawBits(this->fixedPoint_ - rhs.getRawBits());
	return (result);	
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	Fixed	result;
	int		div = pow(2, this->fractionalBits_);
	int		newRaw = this->fixedPoint_ * rhs.getRawBits();

	result.setRawBits(newRaw / div);
	return (result);
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	Fixed	result;
	int		div = pow(2, this->fractionalBits_);
	int		newRaw = this->fixedPoint_ / rhs.getRawBits();

	result.setRawBits(newRaw * div);
	return (result);
}

Fixed & Fixed::operator++(void)
{
	this->fixedPoint_++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	res(*this);

	this->fixedPoint_++;
	return (res);
}

Fixed & Fixed::operator--(void)
{
	this->fixedPoint_--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	res(*this);

	this->fixedPoint_--;
	return (res);
}

float Fixed::toFloat(void) const
{
	float	floatResult = this->fixedPoint_ / pow(2, this->fractionalBits_);
	return (floatResult);
}

int Fixed::toInt(void) const
{
	int	intResult = this->fixedPoint_ / pow(2, this->fractionalBits_);
	return (intResult);
}

std::ostream & operator<<( std::ostream &o, const Fixed &rhs )
{
	o << rhs.toFloat();
	return (o);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}