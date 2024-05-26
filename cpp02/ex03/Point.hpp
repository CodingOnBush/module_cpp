/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:57:51 by momrane           #+#    #+#             */
/*   Updated: 2024/05/26 08:51:31 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed const x_;
	Fixed const y_;

public:
	Point( void );							// default constructor
	Point( const float x, const float y );
	Point( const Point &rhs );				// copy constructor
	Point &	operator=( const Point &rhs );	// assignation operator
	bool	operator==( const Point &rhs ) const;
	~Point( void );							// destructor

	const Fixed	getX( void ) const;
	const Fixed	getY( void ) const;
};

std::ostream &	operator<<( std::ostream &o, Point const &rhs );
bool			bsp( Point const a, Point const b, Point const c, Point const point );

#endif