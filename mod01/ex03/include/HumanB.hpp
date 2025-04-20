/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:31:24 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/20 15:06:46 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
  public:
    HumanB(std::string name);
    ~HumanB(void);

    void attack(void);
    void setWeapon(Weapon &weapon);

  private:
    std::string _name;
    Weapon *_weapon;
};

#endif
