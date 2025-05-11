/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:10:34 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/10 15:24:05 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap(void);
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap(void);

    ScavTrap &operator=(const ScavTrap &other);
	
    std::string getType(void) const;

	void attack(const std::string &target);
    void guardGate(void);

  private:
    static const std::string TYPENAME;
};

#endif
