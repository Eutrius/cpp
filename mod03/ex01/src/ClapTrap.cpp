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

const std::string ClapTrap::TYPENAME = "ClapTrap";

ClapTrap::ClapTrap(void) : _health(10), _energy(10), _damage(0)
{
    std::cout << "A " << ClapTrap::getType() << " is created." << std::endl;
}

ClapTrap::ClapTrap(std::string &name) : _name(name), _health(10), _energy(10), _damage(0)
{
    std::cout << ClapTrap::getType() << " " << name << " is created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : _name(other.getName()), _health(other.getHealth()), _energy(other.getEnergy()), _damage(other.getDamage())
{
    std::cout << ClapTrap::getType() << " " << other.getName() << " is cloned." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << ClapTrap::getType() << " " << _name << " is destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    _name = other.getName();
    _health = other.getHealth();
    _energy = other.getEnergy();
    _damage = other.getDamage();
    std::cout << ClapTrap::getType() << " " << other.getName() << " is cloned." << std::endl;
    return (*this);
}

std::string ClapTrap::getName(void) const
{
    return (_name);
}
unsigned int ClapTrap::getHealth(void) const
{
    return (_health);
}
unsigned int ClapTrap::getEnergy(void) const
{
    return (_energy);
}
unsigned int ClapTrap::getDamage(void) const
{
    return (_damage);
}

void ClapTrap::setName(std::string &name)
{
    _name = name;
}

void ClapTrap::setHealth(unsigned int health)
{
    _health = health;
}

void ClapTrap::setEnergy(unsigned int energy)
{
    _energy = energy;
}

void ClapTrap::setDamage(unsigned int damage)
{
    _damage = damage;
}

void ClapTrap::getStatus(void) const
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
        std::cout << this->getType() << " " << _name << " attacks " << target << ", causing " << _damage
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
