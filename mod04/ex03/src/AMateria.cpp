/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 22:02:38 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/20 22:21:36 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
#include <string>

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::AMateria(const AMateria &other)
{
    *this = other;
}

AMateria::~AMateria(void)
{
}

AMateria &AMateria::operator=(const AMateria &other)
{
    (void)other;
    return (*this);
}

std::string const &AMateria::getType(void) const
{
    return (_type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* A " << this->getType() << "has been used to " << target.getName() << " *" << std::endl;
}
