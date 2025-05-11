/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:10:34 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/10 15:15:34 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
  public:
    FragTrap(void);
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &other);
    ~FragTrap(void);

    FragTrap &operator=(const FragTrap &other);

    std::string getType(void) const;
    std::string getName(void) const;

    void highFivesGuys(void);

  private:
    static const std::string TYPENAME;
};

#endif
