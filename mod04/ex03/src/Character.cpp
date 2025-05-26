/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 22:17:14 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/22 16:43:57 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "utils.h"
#include <iostream>

Character::Character(void)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
}

Character::Character(const std::string &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
}

Character::Character(const Character &other)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
    *this = other;
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
        delete (_inventory[i]);
}

Character &Character::operator=(const Character &other)
{
    if (this == &other)
        return (*this);
    _name = other._name;
    for (int i = 0; i < 4; i++)
        delete (_inventory[i]);

    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = 0;
    }
    return (*this);
}

std::string const &Character::getName(void) const
{
    return (_name);
}

AMateria *Character::getMateriaPtr(int idx) const
{
    if (idx < 4 && idx >= 0 && _inventory[idx])
        return (_inventory[idx]);
    return (0);
}

void Character::equip(AMateria *m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == m)
            return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == 0)
        {
            _inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if ((idx < 4 && idx >= 0) && _inventory[idx])
        _inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
    if ((idx < 4 && idx >= 0) && _inventory[idx])
        _inventory[idx]->use(target);
}

void Character::printInfo(const std::string &message) const
{
    cPrint(_name + " " + message, 1, YELLOW);
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Inventory " << i << ": ";
        if (_inventory[i])
            std::cout << _inventory[i]->getType();
        else
            std::cout << "NULL";
        std::cout << "\n";
    }
    std::cout << std::endl;
}
