
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      	 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:21:01 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/09 11:24:33 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap(void);
    ScavTrap(std::string &name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap(void);

    ScavTrap &operator=(const ScavTrap &other);
    std::string getType(void) const;

    void guardGate(void);

  private:
    static const std::string TYPENAME;
};

#endif
