/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:05:16 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/13 18:17:43 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "utils.h"
#include <string>

class WrongAnimal
{
  public:
    WrongAnimal(void);
    WrongAnimal(const WrongAnimal &other);
    virtual ~WrongAnimal(void);

    WrongAnimal &operator=(const WrongAnimal &other);

    virtual std::string getType(void) const;

    void makeSound(void) const;

  protected:
    std::string _type;

  private:
    static const t_color _color = YELLOW;
};

#endif
