
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
    _brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal()
{
    _brain = new Brain();
    *this = other;
}

Dog::~Dog(void)
{
    delete (_brain);
    cPrint("A " + _type + " has despawned", 1, _color);
}

Dog &Dog::operator=(const Dog &other)
{
    _type = other._type;
    *_brain = *other._brain;
    cPrint("A " + _type + " has been cloned", 1, _color);
    return (*this);
}

std::string Dog::getType(void) const
{
    return (_type);
}

const Brain *Dog::getBrainPtr(void) const
{
    return (_brain);
}

void Dog::makeSound(void) const
{
    cPrint(_type + ": Bark! Bark!", 1, _color);
}
