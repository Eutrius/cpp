/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:10:34 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/10 15:16:37 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
  public:
    ScavTrap(void);
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap(void);

    ScavTrap &operator=(const ScavTrap &other);

    std::string getType(void) const;
    std::string getName(void) const;

    void attack(const std::string &target);
    void guardGate(void);

  protected:
    static const int BASE_ENERGY = 50;

  private:
    static const std::string TYPENAME;
};

#endif
