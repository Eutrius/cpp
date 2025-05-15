/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:25:05 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/15 12:40:05 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
    cPrint("One " + _type + " has spawned", 1, _color);
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type)
{
    cPrint("One " + _type + " has been cloned", 1, _color);
}

WrongAnimal::~WrongAnimal(void)
{
    cPrint("One " + _type + " has despawned", 1, _color);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    cPrint("One " + _type + " has been cloned", 1, _color);
    _type = other._type;
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return (_type);
}

void WrongAnimal::makeSound(void) const
{
    cPrint(_type + ": * Random wrong animal noises *", 1, _color);
}
