/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 22:56:11 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/19 22:56:14 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
  public:
    Cure(void);
    Cure(const Cure &other);
    virtual ~Cure(void);

    Cure &operator=(const Cure &other);

    Cure *clone(void) const;
    // void use(ICharacter &target);
};

#endif
