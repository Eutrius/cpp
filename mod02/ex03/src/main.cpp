/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:29:25 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/06 17:41:14 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.h"
#include <iostream>

static void check_bsp(Point &a, Point &b, Point &c, Point &point);

int main(void)
{
    {
        Point a(0.0f, 6.0f);
        Point b(4.24f, -3.59f);
        Point c(8.0f, 6.0f);
        Point point(7.38f, 5.57f);
        check_bsp(a, b, c, point);
    }
    return (0);
}

static void check_bsp(Point &a, Point &b, Point &c, Point &point)
{
    std::cout << "A: " << a.getX() << " , " << a.getY() << std::endl;
    std::cout << "B: " << b.getX() << " , " << b.getY() << std::endl;
    std::cout << "C: " << c.getX() << " , " << c.getY() << std::endl;
    std::cout << "Point: " << point.getX() << " , " << point.getY() << std::endl;
    if (bsp(a, b, c, point))
        std::cout << "Point is inside" << std::endl;
    else
        std::cout << "Point is outside the triangle!" << std::endl;
    std::cout << std::endl;
}
