/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:20:21 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/06 17:52:50 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(const int num) : _value(num << FRACTIONAL_BITS)
{
}

Fixed::Fixed(const float num)
{
    _value = roundf((num * (1 << FRACTIONAL_BITS)));
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(const Fixed &other)
{
    _value = other.getRawBits();
    return (*this);
}

bool Fixed::operator<(const Fixed &other) const
{
    return (_value < other.getRawBits());
}

bool Fixed::operator>(const Fixed &other) const
{
    return (_value > other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (_value >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (_value <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
    return (_value == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (_value != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed tmp = Fixed(this->toFloat() + other.toFloat());
    return (tmp);
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed tmp = Fixed(this->toFloat() - other.toFloat());
    return (tmp);
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed tmp = Fixed(this->toFloat() * other.toFloat());
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed tmp = Fixed(this->toFloat() / other.toFloat());
    return (tmp);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    _value++;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    _value--;
    return (tmp);
}

Fixed &Fixed::operator++(void)
{
    _value++;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    _value--;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
    _value = raw;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(_value) / (1 << FRACTIONAL_BITS));
}

int Fixed::toInt(void) const
{
    return (int)(_value >> FRACTIONAL_BITS);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

Fixed Fixed::abs(Fixed a)
{
    return (a < Fixed(0) ? a * Fixed(-1) : a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return (os);
}
