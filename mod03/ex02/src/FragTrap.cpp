/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:36:21 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/10 15:17:06 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

const std::string FragTrap::TYPENAME = "FragTrap";

FragTrap::FragTrap(void) : ClapTrap()
{
    _health = 100;
    _energy = 100;
    _damage = 30;
    std::cout << "A " << TYPENAME << " is created." << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _health = 100;
    _energy = 100;
    _damage = 30;
    std::cout << TYPENAME << " " << name << " is created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    _health = other._health;
    _energy = other._energy;
    _damage = other._damage;
    std::cout << TYPENAME << " " << other._name << " is cloned." << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << TYPENAME << " " << _name << " is destroyed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    _name = other._name;
    _health = other._health;
    _energy = other._energy;
    _damage = other._damage;
    std::cout << TYPENAME << " " << other._name << " is cloned." << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << TYPENAME << " " << _name << ": Give me a high five!" << std::endl;
}

std::string FragTrap::getType(void) const
{
    return (TYPENAME);
}
