
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:25:05 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/12 15:09:00 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    _type = "WrongCat";
    cPrint("A " + _type + " has spawned", 1, _color);
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
    _type = other._type;
    cPrint("A " + _type + " has been cloned", 1, _color);
}

WrongCat::~WrongCat(void)
{
    cPrint("A " + _type + " has despawned", 1, _color);
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    _type = other._type;
    cPrint("A " + _type + " has been cloned", 1, _color);
    return (*this);
}

std::string WrongCat::getType(void) const
{
    return (_type);
}

void WrongCat::makeSound(void) const
{
    cPrint(_type + ": Meow!", 1, _color);
}
