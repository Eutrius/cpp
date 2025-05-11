/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:52:11 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/10 15:16:16 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
  public:
    ClapTrap(void);
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &other);
    virtual ~ClapTrap(void);

    ClapTrap &operator=(const ClapTrap &other);

    virtual std::string getType(void) const;
    virtual std::string getName(void) const;

    void setName(const std::string &name);

    void printStatus(void) const;

    virtual void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

  protected:
    std::string _name;
    unsigned int _health;
    unsigned int _energy;
    unsigned int _damage;

  private:
    static const std::string TYPENAME;
};

#endif
