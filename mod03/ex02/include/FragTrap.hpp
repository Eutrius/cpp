
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

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
    FragTrap(void);
    FragTrap(std::string &name);
    FragTrap(const FragTrap &other);
    ~FragTrap(void);

    FragTrap &operator=(const FragTrap &other);

    void highFivesGuys(void);

    std::string getType(void) const;

  private:
    static const std::string TYPENAME;
};

#endif
