/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:36:21 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/10 15:44:47 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

const std::string DiamondTrap::TYPENAME = "DiamondTrap";

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
    _health = FragTrap::_health;
    _energy = ScavTrap::BASE_ENERGY;
    _damage = FragTrap::_damage;
    std::cout << "A " << TYPENAME << " is created." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
    _health = FragTrap::_health;
    _energy = ScavTrap::BASE_ENERGY;
    _damage = FragTrap::_damage;
    std::cout << TYPENAME << " " << name << " is created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    _name = other._name;
    _health = other._health;
    _energy = other._energy;
    _damage = other._damage;
    std::cout << TYPENAME << " " << other._name << " is cloned." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << TYPENAME << " " << _name << " is destroyed." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    _name = other._name;
    _health = other._health;
    _energy = other._energy;
    _damage = other._damage;
    std::cout << TYPENAME << " " << other._name << " is cloned." << std::endl;
    return (*this);
}

void DiamondTrap::whoAmI(void) const
{
    std::cout << TYPENAME << " " << _name << ": I am " << _name << ", a direct discendant of " << ClapTrap::_name << "!"
              << std::endl;
}

std::string DiamondTrap::getType(void) const
{
    return (TYPENAME);
}

std::string DiamondTrap::getName(void) const
{
    return (this->_name);
}
