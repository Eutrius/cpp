/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:05:16 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/13 14:45:09 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "utils.h"
#include <string>

class Animal
{
  public:
    Animal(void);
    Animal(const Animal &other);
    ~Animal(void);

    Animal &operator=(const Animal &other);

    virtual std::string getType(void) const;

    virtual void makeSound(void) const;

  protected:
    std::string _type;

  private:
    static const t_color _color = WHITE;
};

#endif
