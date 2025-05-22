/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 22:12:23 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/19 23:00:20 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>
#include <string>

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice &other) : AMateria(other)
{
}

Ice::~Ice(void)
{
}

Ice &Ice::operator=(const Ice &other)
{
    (void)other;
    return (*this);
}

Ice *Ice::clone(void) const
{
    return (new Ice());
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}
