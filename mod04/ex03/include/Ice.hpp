/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 22:10:27 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/19 22:55:11 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
  public:
    Ice(void);
    Ice(const Ice &other);
    virtual ~Ice(void);

    Ice &operator=(const Ice &other);

    AMateria *clone(void) const;
    void use(ICharacter &target);
};

#endif
