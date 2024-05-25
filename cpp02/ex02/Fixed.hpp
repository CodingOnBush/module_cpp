/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:49:57 by momrane           #+#    #+#             */
/*   Updated: 2024/05/25 18:19:09 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					rawValue_;
	static const int	fractionalBits_ = 8;

public:
	Fixed( void );
	Fixed( const Fixed &rhs );
	Fixed &	operator=( const Fixed &rhs );
	
	bool	operator>( const Fixed &rhs ) const;
	bool	operator<( const Fixed &rhs ) const;
	bool	operator>=( const Fixed &rhs ) const;
	bool	operator<=( const Fixed &rhs ) const;
	bool	operator==( const Fixed &rhs ) const;
	bool	operator!=( const Fixed &rhs ) const;
	
	Fixed	operator+( const Fixed &rhs ) const;
	Fixed	operator-( const Fixed &rhs ) const;
	Fixed	operator*( const Fixed &rhs ) const;
	Fixed	operator/( const Fixed &rhs ) const;
	
	// pourquoi on met pas & pour les post ?
	Fixed &	operator++( void );						// pre increment
	Fixed	operator++( int );						// post increment
	Fixed &	operator--( void );						// pre decrement
	Fixed	operator--( int );						// post decrement
	
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	// pourquoi on met des const ici ?
	Fixed( const int value );
	Fixed( const float value );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	// ca veut dire quoi le static ici ?
	static Fixed &			min( Fixed &a, Fixed &b );	// return the smallest of the two
	static const Fixed &	min( const Fixed &a, const Fixed &b );	// return the smallest of the two
	static Fixed &			max( Fixed &a, Fixed &b );	// return the biggest of the two
	static const Fixed &	max( const Fixed &a, const Fixed &b );	// return the biggest of the two
};

std::ostream &	operator<<( std::ostream &o, const Fixed &rhs );

#endif