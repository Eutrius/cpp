/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:44:07 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/23 14:56:34 by jyriarte         ###   ########.fr       */
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
    static const std::string levels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR",
    };

    size_t index = 0;
    while (index <= sizeof(levels) / sizeof(levels[0]))
    {
        if (level == levels[index])
            break;
        index++;
    }

    switch (index)
    {
    case 0:
        debug();
        // fall through
    case 1:
        info();
        // fall through
    case 2:
        warning();
        // fall through
    case 3:
        error();
		break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void Harl::debug(void)
{
    std::cout
        << "[ DEBUG ]\n"
           "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"
        << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\n"
                 "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If "
                 "you did, I wouldn’t be asking for more!\n"
              << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n"
                 "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started "
                 "working here just last month.\n"
              << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n"
                 "This is unacceptable! I want to speak to the manager now.\n"
              << std::endl;
}
