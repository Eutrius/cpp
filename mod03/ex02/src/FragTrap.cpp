/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:36:21 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/09 11:46:27 by jyriarte         ###   ########.fr       */
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

FragTrap::FragTrap(std::string &name) : ClapTrap()
{
    _health = 100;
    _energy = 100;
    _damage = 30;
    std::cout << TYPENAME << " " << name << " is created." << std::endl;
    _name = name;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap()
{
    _name = other.getName();
    _health = other.getHealth();
    _energy = other.getEnergy();
    _damage = other.getDamage();
    std::cout << TYPENAME << " " << other.getName() << " is cloned." << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << TYPENAME << " " << _name << " is destroyed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    _name = other.getName();
    _health = other.getHealth();
    _energy = other.getEnergy();
    _damage = other.getDamage();
    std::cout << TYPENAME << " " << other.getName() << " is cloned." << std::endl;
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
