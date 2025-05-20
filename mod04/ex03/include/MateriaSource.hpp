/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 22:16:33 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/20 22:16:53 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource
{
  public:
    MateriaSource(void);
    MateriaSource(const MateriaSource &other);
    ~MateriaSource(void);

    MateriaSource &operator=(const MateriaSource &other);
};

#endif
