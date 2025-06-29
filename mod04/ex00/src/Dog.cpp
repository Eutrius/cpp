
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:25:05 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/12 15:09:00 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    _type = "Dog";
    cPrint("A " + _type + " has spawned", 1, _color);
}

Dog::Dog(const Dog &other) : Animal()
{
    _type = other._type;
    cPrint("A " + _type + " has been cloned", 1, _color);
}

Dog::~Dog(void)
{
    cPrint("A " + _type + " has despawned", 1, _color);
}

Dog &Dog::operator=(const Dog &other)
{
    _type = other._type;
    cPrint("A " + _type + " has been cloned", 1, _color);
    return (*this);
}

std::string Dog::getType(void) const
{
    return (_type);
}

void Dog::makeSound(void) const
{
    cPrint(_type + ": Bark! Bark!", 1, _color);
}
