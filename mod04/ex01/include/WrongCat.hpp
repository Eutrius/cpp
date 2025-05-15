/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:05:16 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/13 18:18:49 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal
{
  public:
    WrongCat(void);
    WrongCat(const WrongCat &other);
    ~WrongCat(void);

    WrongCat &operator=(const WrongCat &other);

    std::string getType(void) const;

    void makeSound(void) const;

  private:
    static const t_color _color = PURPLE;
};

#endif
