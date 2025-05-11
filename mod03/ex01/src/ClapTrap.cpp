/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:00:03 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/10 15:24:09 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <climits>
#include <iostream>
#include <ostream>

const std::string ClapTrap::TYPENAME = "ClapTrap";

ClapTrap::ClapTrap(void) : _health(10), _energy(10), _damage(0)
{
    std::cout << "A " << TYPENAME << " is created." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _health(10), _energy(10), _damage(0)
{
    std::cout << TYPENAME << " " << name << " is created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : _name(other._name), _health(other._health), _energy(other._energy), _damage(other._damage)
{
    std::cout << TYPENAME << " " << other._name << " is cloned." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << TYPENAME << " " << _name << " is destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    _name = other._name;
    _health = other._health;
    _energy = other._energy;
    _damage = other._damage;
    std::cout << ClapTrap::getType() << " " << other._name << " is cloned." << std::endl;
    return (*this);
}


void ClapTrap::setName(const std::string &name)
{
    _name = name;
}

void ClapTrap::printStatus(void) const
{
    std::cout << std::endl;
    std::cout << this->getType() << ": " << _name << std::endl;
    std::cout << "health: " << _health << std::endl;
    std::cout << "energy: " << _energy << std::endl;
    std::cout << "damage: " << _damage << "\n" << std::endl;
}

std::string ClapTrap::getType(void) const
{
    return (TYPENAME);
}

void ClapTrap::attack(const std::string &target)
{
    if (_energy && _health)
    {
        std::cout << this->getType() << " " << _name << " used clap punch to " << target << ", causing " << _damage
                  << " points of damage!" << std::endl;
        _energy--;
    }
    else
        std::cout << this->getType() << " " << _name << " is not responding." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->getType() << " " << _name << " took " << amount << " points of damage!" << std::endl;
    if (_health < amount)
        _health = 0;
    else
        _health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy)
    {
        std::cout << this->getType() << " " << _name << " has been repaired, gaining " << amount << " points of health!"
                  << std::endl;
        if (UINT_MAX - _health < amount)
            _health = UINT_MAX;
        else
            _health += amount;
        _energy--;
    }
    else
        std::cout << this->getType() << " " << _name << " is not responding." << std::endl;
}
