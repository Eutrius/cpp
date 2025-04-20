/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:43:11 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/19 14:15:09 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
  public:
    Zombie(void);
    ~Zombie(void);

    void setName(std::string);
    void announce(void);

  private:
    std::string _name;
};

#endif
