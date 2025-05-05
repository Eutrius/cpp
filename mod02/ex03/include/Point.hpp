/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:32:24 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/05 15:48:35 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
  public:
    Point(void);
    Point(Fixed x, Fixed y);
    Point(Point &other);
    ~Point(void);

    Point &operator=(const Point &other);

  private:
    const Fixed _x;
    const Fixed _y;
};

#endif
