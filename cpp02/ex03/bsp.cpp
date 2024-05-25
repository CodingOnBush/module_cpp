/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:57:35 by momrane           #+#    #+#             */
/*   Updated: 2024/05/25 18:47:40 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	getTriangleArea(Point const a, Point const b, Point const c)
{
	Fixed const	base = (b.getX() - a.getX()) * (c.getY() - a.getY());
	Fixed const	height = (b.getY() - a.getY()) * (c.getX() - a.getX());
	
	return ((base - height) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed const a1 = getTriangleArea(a, b, point);
	Fixed const a2 = getTriangleArea(b, c, point);
	Fixed const a3 = getTriangleArea(c, a, point);

	return ((a1 >= 0 && a2 >= 0 && a3 >= 0) || (a1 <= 0 && a2 <= 0 && a3 <= 0));
}

/*
a1 représente l'aire du triangle formé par les points a, b et point
*/