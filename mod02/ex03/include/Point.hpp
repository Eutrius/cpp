/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:32:24 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/06 15:44:51 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{

  public:
    Point(void);
    Point(const float x, const float y);
    Point(const Point &other);
    ~Point(void);

    Point &operator=(const Point &other);

    Fixed getX(void) const;
    Fixed getY(void) const;

    static Fixed triangleArea(Point const &a, Point const &b, Point const &c);

  private:
    const Fixed _x;
    const Fixed _y;
};

#endif
