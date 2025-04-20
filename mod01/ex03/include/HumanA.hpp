/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 10:34:37 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/20 14:40:18 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
  public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    void attack(void);

  private:
    std::string _name;
    Weapon &_weapon;
};

#endif
