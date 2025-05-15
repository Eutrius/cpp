/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:05:16 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/13 14:45:09 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
  public:
    Brain(void);
    Brain(const Brain &other);
    ~Brain(void);

    Brain &operator=(const Brain &other);

    const std::string *getIdeas(void) const;

  private:
    std::string _ideas[100];
};

#endif
