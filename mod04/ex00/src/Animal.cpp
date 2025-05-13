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
}

Animal::Animal(const Animal &other) : _type(other._type)
{
}

Animal::~Animal(void)
{
}

Animal &Animal::operator=(const Animal &other)
{
    _type = other._type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (_type);
}

void Animal::makeSound(void) const
{
    cPrint(_type + ": * Random animal noises *", 1, _color);
}
