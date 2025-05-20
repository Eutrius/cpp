/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 22:58:53 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/20 20:56:06 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character
{
  public:
    Character(void);
    Character(const Character &other);
    ~Character(void);

    Character &operator=(const Character &other);

  private:
    AMateria *_inventory[4];
    std::string _name;
};

#endif
