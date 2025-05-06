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
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed area = Point::triangleArea(a, b, c);
    Fixed areaAB = Point::triangleArea(a, b, point);
    Fixed areaAC = Point::triangleArea(a, point, c);
    Fixed areaBC = Point::triangleArea(point, b, c);
    Fixed sum = areaBC + areaAC + areaAB;

    std::cout << sum << std::endl;
    std::cout << area << std::endl;
    if (area == sum)
    {
        if (areaAC == 0 || areaBC == 0 || areaAB == 0)
            return (false);

        return (true);
    }

    return (false);
}
