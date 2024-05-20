/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:49:57 by momrane           #+#    #+#             */
/*   Updated: 2024/05/18 11:18:06 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					fixedPoint_;
	static const int	fractionalBits_ = 8;

public:
	Fixed( void );
	Fixed( const Fixed &rhs );
	Fixed &	operator=( const Fixed &rhs );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif