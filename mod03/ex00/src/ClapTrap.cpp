/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:00:03 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/08 11:01:09 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <climits>
#include <iostream>
#include <ostream>

ClapTrap::ClapTrap(void) : _health(10), _energy(10), _damage(0)
{
    std::cout << "A " << "ClapTrap" << " is created." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _health(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap" << " " << name << " is created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : _name(other._name), _health(other._health), _energy(other._energy), _damage(other._damage)
{
    std::cout << "ClapTrap" << " " << other._name << " is cloned." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap" << " " << _name << " is destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    _name = other._name;
    _health = other._health;
    _energy = other._energy;
    _damage = other._damage;
    std::cout << "ClapTrap" << " " << other._name << " is cloned." << std::endl;
    return (*this);
}

void ClapTrap::printStatus(void) const
{
    std::cout << std::endl;
    std::cout << "ClapTrap" << ": " << _name << std::endl;
    std::cout << "health: " << _health << std::endl;
    std::cout << "energy: " << _energy << std::endl;
    std::cout << "damage: " << _damage << "\n" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (_energy && _health)
    {
        std::cout << "ClapTrap" << " " << _name << " attacks " << target << ", causing " << _damage
                  << " points of damage!" << std::endl;
        _energy--;
    }
    else
        std::cout << "ClapTrap" << " " << _name << " is not responding." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap" << " " << _name << " took " << amount << " points of damage!" << std::endl;
    if (_health < amount)
        _health = 0;
    else
        _health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy)
    {
        std::cout << "ClapTrap" << " " << _name << " has been repaired, gaining " << amount << " points of health!"
                  << std::endl;
        if (UINT_MAX - _health < amount)
            _health = UINT_MAX;
        else
            _health += amount;
        _energy--;
    }
    else
        std::cout << "ClapTrap" << " " << _name << " is not responding." << std::endl;
}

void ClapTrap::setName(const std::string &name)
{
    _name = name;
}
