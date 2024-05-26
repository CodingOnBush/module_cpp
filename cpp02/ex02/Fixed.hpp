/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:49:57 by momrane           #+#    #+#             */
/*   Updated: 2024/05/26 08:11:37 by allblue          ###   ########.fr       */
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
	~Fixed( void );
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed( const int value );
	Fixed( const float value );

	float	toFloat( void ) const;
	int		toInt( void ) const;
	
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
	
	Fixed &	operator++( void );
	Fixed	operator++( int );
	Fixed &	operator--( void );
	Fixed	operator--( int );

	static Fixed &			min( Fixed &a, Fixed &b );
	static const Fixed &	min( const Fixed &a, const Fixed &b );
	static Fixed &			max( Fixed &a, Fixed &b );
	static const Fixed &	max( const Fixed &a, const Fixed &b );
};

std::ostream &	operator<<( std::ostream &o, const Fixed &rhs );

#endif