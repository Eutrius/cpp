/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:23:27 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/06 17:52:21 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed epsilon;
    epsilon.setRawBits(1);

    Fixed area = Point::triangleArea(a, b, c);
    if (area <= epsilon)
        return (false);

    Fixed area1 = Point::triangleArea(point, b, c);
    Fixed area2 = Point::triangleArea(a, point, c);
    Fixed area3 = Point::triangleArea(a, b, point);

    if (area1 <= epsilon || area2 <= epsilon || area3 <= epsilon)
        return (false);

    Fixed diff = Fixed::abs((area1 + area2 + area3) - area);

    return (diff <= epsilon);
}
