/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:05:16 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/13 14:42:28 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog : public Animal
{
  public:
    Dog(void);
    Dog(const Dog &other);
    ~Dog(void);

    Dog &operator=(const Dog &other);

    std::string getType(void) const;

    void makeSound(void) const;

  private:
    static const t_color _color = BLUE;
};

#endif
