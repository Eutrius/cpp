/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:20:21 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/29 17:20:39 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed(void) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) : _value(num << FRACTIONAL_BITS)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
    _value = roundf((num * (1 << FRACTIONAL_BITS)));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = other.getRawBits();
    return (*this);
}


int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(_value) / (1 << FRACTIONAL_BITS);

}

int Fixed::toInt(void) const
{
	return (int)(_value >> FRACTIONAL_BITS);
}

std::ostream &operator<<(std::ostream &os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
