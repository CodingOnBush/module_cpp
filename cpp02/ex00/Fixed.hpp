/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:49:57 by momrane           #+#    #+#             */
/*   Updated: 2024/05/26 07:48:30 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					rawValue_;
	static const int	fractionalBits_ = 8;

public:
	Fixed( void );							// Default constructor
	Fixed( const Fixed &rhs );				// Copy constructor
	Fixed &	operator=( const Fixed &rhs );	// Assignation operator
	~Fixed( void );							// Destructor

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif