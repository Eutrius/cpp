/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 22:15:55 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/22 16:53:52 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _nMaterias(0)
{
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    *this = other;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < _nMaterias; i++)
        delete (_materias[i]);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    _nMaterias = other._nMaterias;
    for (int i = 0; i < other._nMaterias; i++)
        _materias[i] = other._materias[i]->clone();
    return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (materia && _nMaterias < 4)
    {
        _materias[_nMaterias] = materia->clone();
        _nMaterias++;
    }
    delete materia;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < _nMaterias; i++)
    {
        if (_materias[i]->getType() == type)
        {
            return (_materias[i]->clone());
        }
    }
    return (0);
}
