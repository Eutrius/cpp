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
#include "ICharacter.hpp"

class Character : public ICharacter
{
  public:
    Character(void);
    Character(const std::string &name);
    Character(const Character &other);
    ~Character(void);

    Character &operator=(const Character &other);
    std::string const &getName(void) const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);

  private:
    AMateria *_inventory[4];
    std::string _name;
};

#endif
