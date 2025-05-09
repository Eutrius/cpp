/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:36:21 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/09 11:46:27 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

const std::string ScavTrap::TYPENAME = "ScavTrap";

ScavTrap::ScavTrap(void) : ClapTrap()
{
    _health = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "A " << TYPENAME << " is created." << std::endl;
}

ScavTrap::ScavTrap(std::string &name) : ClapTrap()
{
    _health = 100;
    _energy = 50;
    _damage = 20;
    _name = name;
    std::cout << TYPENAME << " " << name << " is created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap()
{
    _name = other.getName();
    _health = other.getHealth();
    _energy = other.getEnergy();
    _damage = other.getDamage();
    std::cout << TYPENAME << " " << other.getName() << " is cloned." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << TYPENAME << " " << _name << " is destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    _name = other.getName();
    _health = other.getHealth();
    _energy = other.getEnergy();
    _damage = other.getDamage();
    std::cout << TYPENAME << " " << other.getName() << " is cloned." << std::endl;
    return (*this);
}

void ScavTrap::guardGate(void)
{
    std::cout << TYPENAME << " " << _name << " is now in Gate Keeper mode." << std::endl;
}

std::string ScavTrap::getType(void) const
{
    return (TYPENAME);
}
