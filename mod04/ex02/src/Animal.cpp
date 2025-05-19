/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:25:05 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/13 14:44:51 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
    cPrint("One " + _type + " has spawned", 1, _color);
}

Animal::Animal(const Animal &other) : _type(other._type)
{
    cPrint("One " + _type + " has been cloned", 1, _color);
}

Animal::~Animal(void)
{
    cPrint("One " + _type + " has despawned", 1, _color);
}

Animal &Animal::operator=(const Animal &other)
{
    _type = other._type;
    cPrint("One " + _type + " has been cloned", 1, _color);
    return (*this);
}

std::string Animal::getType(void) const
{
    return (_type);
}
