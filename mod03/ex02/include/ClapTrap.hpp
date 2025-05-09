/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:52:11 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/08 10:56:43 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
  public:
    ClapTrap(void);
    ClapTrap(std::string &name);
    ClapTrap(const ClapTrap &other);
    ~ClapTrap(void);

    ClapTrap &operator=(const ClapTrap &other);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void getStatus(void) const;
    std::string getName(void) const;
    unsigned int getHealth(void) const;
    unsigned int getEnergy(void) const;
    unsigned int getDamage(void) const;

    virtual std::string getType(void) const;

    void setName(std::string &name);
    void setHealth(unsigned int health);
    void setEnergy(unsigned int energy);
    void setDamage(unsigned int damage);

  private:
    static const std::string TYPENAME;

  protected:
    std::string _name;
    unsigned int _health;
    unsigned int _energy;
    unsigned int _damage;
};

#endif
