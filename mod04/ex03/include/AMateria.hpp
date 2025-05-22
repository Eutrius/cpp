/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:45:09 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/20 22:17:39 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria
{
  public:
    AMateria(void);
    AMateria(std::string const &type);
    AMateria(const AMateria &other);
    virtual ~AMateria(void);

    AMateria &operator=(const AMateria &other);

    std::string const &getType(void) const;
    virtual AMateria *clone(void) const = 0;
    virtual void use(ICharacter &target);

  protected:
    std::string _type;
};

#endif
