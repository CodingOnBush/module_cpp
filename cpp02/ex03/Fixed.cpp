/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:51:12 by momrane           #+#    #+#             */
/*   Updated: 2024/05/25 18:17:08 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : rawValue_(0) {}

Fixed::Fixed( const Fixed &rhs )
{
	*this = rhs;
}

Fixed &	Fixed::operator=( const Fixed &rhs )
{
	this->rawValue_ = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {}

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
	this->rawValue_ = value << this->fractionalBits_;
}

Fixed::Fixed( const float value )
{
	this->rawValue_ = roundf(value * (1 << this->fractionalBits_));
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return (this->rawValue_ > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return (this->rawValue_ < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return (this->rawValue_ >= rhs.getRawBits());	
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return (this->rawValue_ <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return (this->rawValue_ == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return (this->rawValue_ != rhs.getRawBits());	
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	Fixed	result;

	result.setRawBits(this->rawValue_ + rhs.getRawBits());
	return (result);	
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	Fixed	result;
	
	result.setRawBits(this->rawValue_ - rhs.getRawBits());
	return (result);	
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	Fixed	result;
	int		div = pow(2, this->fractionalBits_);
	int		newRaw = this->rawValue_ * rhs.getRawBits();

	result.setRawBits(newRaw / div);
	return (result);
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	Fixed	result;
	int		div = pow(2, this->fractionalBits_);
	int		newRaw = this->rawValue_ / rhs.getRawBits();

	result.setRawBits(newRaw * div);
	return (result);
}

Fixed & Fixed::operator++(void)
{
	this->rawValue_++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	res(*this);

	this->rawValue_++;
	return (res);
}

Fixed & Fixed::operator--(void)
{
	this->rawValue_--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	res(*this);

	this->rawValue_--;
	return (res);
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
