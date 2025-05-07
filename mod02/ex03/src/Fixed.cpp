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
    Fixed tmp;
    tmp.setRawBits(_value + other.getRawBits());
    return (tmp);
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed tmp;
    tmp.setRawBits(_value - other.getRawBits());
    return (tmp);
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed tmp;
    long long tmp_value = static_cast<long long>(_value) * static_cast<long long>(other.getRawBits());
    tmp.setRawBits(static_cast<int>(tmp_value >> FRACTIONAL_BITS));
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed tmp;
    if (other.getRawBits() == 0)
        return (tmp);
    long long tmp_value = static_cast<long long>(_value) << FRACTIONAL_BITS;
    tmp_value = tmp_value / static_cast<long long>(other.getRawBits());
    tmp.setRawBits(static_cast<int>(tmp_value));
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
    return (static_cast<float>(_value) / static_cast<float>(1 << FRACTIONAL_BITS));
}

int Fixed::toInt(void) const
{
    return (static_cast<int>(_value >> FRACTIONAL_BITS));
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

Fixed Fixed::abs(Fixed a)
{
    if (a.getRawBits() < 0)
    {
        Fixed tmp;
        tmp.setRawBits(-a.getRawBits());
        return (tmp);
    }
    return (a);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return (os);
}
