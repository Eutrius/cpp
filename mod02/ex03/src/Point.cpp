/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:30:29 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/06 17:53:45 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point &other) : _x(other.getX()), _y(other.getY())
{
}

Point::~Point(void)
{
}

Point &Point::operator=(const Point &other)
{
    (void)other;
    return (*this);
}

Fixed Point::getX(void) const
{
    return (_x);
}

Fixed Point::getY(void) const
{
    return (_y);
}

Fixed Point::triangleArea(Point const &a, Point const &b, Point const &c)
{
    Fixed bhA = (a.getX() * (b.getY() - c.getY()));
    Fixed bhB = (b.getX() * (c.getY() - a.getY()));
    Fixed bhC = (c.getX() * (a.getY() - b.getY()));
    return (Fixed::abs(bhA + bhB + bhC) / Fixed(2.0f));
}
