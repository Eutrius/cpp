/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:05:16 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/13 14:42:31 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal
{
  public:
    Cat(void);
    Cat(const Cat &other);
    ~Cat(void);

    Cat &operator=(const Cat &other);

    std::string getType(void) const;

    void makeSound(void) const;

  private:
    const Brain *_brain;
    static const t_color _color = RED;
};

#endif
