
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

    /*  void attack(const std::string &target);*/
    /*  void takeDamage(unsigned int amount);*/
    /*  void beRepaired(unsigned int amount);*/
    /**/
    /*  void getStatus(void) const;*/
    /*  std::string getName(void) const;*/
    /*  unsigned int getHealth(void) const;*/
    /*  unsigned int getEnergy(void) const;*/
    /*  unsigned int getDamage(void) const;*/
    /**/
    /*  void setName(std::string &name);*/
    /*  void setHealth(unsigned int health);*/
    /*  void setEnergy(unsigned int energy);*/
    /*  void setDamage(unsigned int damage);*/
    /**/
    /*private:*/
    /*  std::string _name;*/
    /*  unsigned int _health;*/
    /*  unsigned int _energy;*/
    /*  unsigned int _damage;*/
};

#endif
