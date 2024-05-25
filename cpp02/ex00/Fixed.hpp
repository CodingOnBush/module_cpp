/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:49:57 by momrane           #+#    #+#             */
/*   Updated: 2024/05/25 17:40:33 by allblue          ###   ########.fr       */
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
	Fixed( void );
	Fixed( const Fixed &rhs );
	Fixed &	operator=( const Fixed &rhs );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif