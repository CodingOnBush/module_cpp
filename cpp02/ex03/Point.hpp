/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:57:51 by momrane           #+#    #+#             */
/*   Updated: 2024/05/19 16:31:34 by momrane          ###   ########.fr       */
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
	// je peux ajouter ce que je veux ici

public:
	Point( void );
	Point( const float x, const float y );
	Point( const Point &rhs );
	Point &	operator=( const Point &rhs );
	~Point( void );
	// je peux ajouter ce que je veux ici
	const Fixed	getX( void ) const;
	const Fixed	getY( void ) const;
};

std::ostream &	operator<<( std::ostream &o, Point const &rhs );
bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif