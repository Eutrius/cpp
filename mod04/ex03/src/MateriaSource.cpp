/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 22:15:55 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/20 22:16:57 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource(void)
{
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    (void)other;
}

MateriaSource::~MateriaSource(void)
{
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    (void)other;
    return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    (void)materia;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    (void)type;
    return (new Ice());
}
