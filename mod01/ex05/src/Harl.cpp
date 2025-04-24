/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:44:07 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/23 14:06:59 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::complain(std::string level)
{
    static const t_complaint complaints[] = {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error},
    };

    for (size_t i = 0; i < sizeof(complaints) / sizeof(complaints[0]); i++)
    {
        std::cout << i << std::endl;
        if (level == complaints[i].level)
            (this->*complaints[i].func)();
    };
}

void Harl::debug(void)
{
    std::cout
        << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
        << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If "
                 "you did, I wouldn’t be asking for more!"
              << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started "
                 "working here just last month."
              << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
