/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:36:21 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/10 15:17:08 by jyriarte         ###   ########.fr       */
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

ScavTrap::ScavTrap(const std::string &name) : ClapTrap()
{
    _name = name;
    _health = 100;
    _energy = 50;
    _damage = 20;
    std::cout << TYPENAME << " " << name << " is created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap()
{
    _name = other._name;
    _health = other._health;
    _energy = other._energy;
    _damage = other._damage;
    std::cout << TYPENAME << " " << other._name << " is cloned." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << TYPENAME << " " << _name << " is destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    _name = other._name;
    _health = other._health;
    _energy = other._energy;
    _damage = other._damage;
    std::cout << TYPENAME << " " << other._name << " is cloned." << std::endl;
    return (*this);
}

std::string ScavTrap::getType(void) const
{
    return (TYPENAME);
}

std::string ScavTrap::getName(void) const
{
    return (_name);
}

void ScavTrap::guardGate(void)
{
    std::cout << this->getType() << " " << this->getName() << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_energy && _health)
    {
        std::cout << this->getType() << " " << this->getName() << " used scav upperpunch to " << target << ", causing "
                  << _damage << " points of damage!" << std::endl;
        _energy--;
    }
    else
        std::cout << this->getType() << " " << this->getName() << " is not responding." << std::endl;
}
