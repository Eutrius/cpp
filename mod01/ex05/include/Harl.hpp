/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:30:28 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/23 14:09:28 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
  public:
    Harl(void);
    ~Harl(void);

    void complain(std::string level);

  private:
    typedef void (Harl::*memFn)(void);
    typedef struct s_complaint
    {
        std::string level;
        memFn func;
    } t_complaint;

    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};

#endif
