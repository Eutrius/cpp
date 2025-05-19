
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:25:05 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/12 15:09:00 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    _type = "Cat";
    cPrint("A " + _type + " has spawned", 1, _color);
    _brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal()
{
    _type = other._type;
    cPrint("A " + _type + " has been cloned", 1, _color);
    _brain = new Brain();
}

Cat::~Cat(void)
{
    delete (_brain);
    cPrint("A " + _type + " has despawned", 1, _color);
}

Cat &Cat::operator=(const Cat &other)
{
    _type = other._type;
    cPrint("A " + _type + " has been cloned", 1, _color);
    return (*this);
}

std::string Cat::getType(void) const
{
    return (_type);
}

const Brain *Cat::getBrainPtr(void) const
{
    return (_brain);
}

void Cat::makeSound(void) const
{
    cPrint(_type + ": Meow!", 1, _color);
}
