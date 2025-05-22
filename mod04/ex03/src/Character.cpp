/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 22:17:14 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/20 22:17:22 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
}

Character::Character(const std::string &name) : _name(name)
{
}

Character::Character(const Character &other)
{
    (void)other;
}

Character::~Character(void)
{
}

Character &Character::operator=(const Character &other)
{
    (void)other;
    return (*this);
}

std::string const &Character::getName(void) const
{
    return (_name);
}

void Character::equip(AMateria *m)
{
    (void)m;
}

void Character::unequip(int idx)
{
    (void)idx;
}

void Character::use(int idx, ICharacter &target)
{
    (void)idx;
    (void)target;
}
