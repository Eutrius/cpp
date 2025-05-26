/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 22:16:33 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/22 16:50:49 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
  public:
    MateriaSource(void);
    MateriaSource(const MateriaSource &other);
    ~MateriaSource(void);

    MateriaSource &operator=(const MateriaSource &other);

    void printInfo(const std::string &name) const;
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);

  private:
    int _nMaterias;
    AMateria *_materias[4];
};

#endif
