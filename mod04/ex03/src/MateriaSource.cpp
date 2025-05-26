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
#include "utils.h"
#include <iostream>

MateriaSource::MateriaSource(void) : _nMaterias(0)
{
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    _nMaterias = 0;
    *this = other;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < _nMaterias; i++)
        delete (_materias[i]);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this == &other)
        return (*this);
    for (int i = 0; i < _nMaterias; i++)
        delete (_materias[i]);
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

void MateriaSource::printInfo(const std::string &name) const
{
    cPrint(name, 1, YELLOW);
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Materia " << i << ": ";
        if (i < _nMaterias)
            std::cout << _materias[i]->getType();
        else
            std::cout << "NULL";
        std::cout << "\n";
    }
    std::cout << std::endl;
}
