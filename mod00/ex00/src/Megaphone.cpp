/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:00:33 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/09 14:00:33 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Megaphone.hpp"
#include <cstddef>
#include <iostream>

static char *to_upper(char *str);

Megaphone::Megaphone()
{
}

Megaphone::~Megaphone()
{
}

void Megaphone::speak(char **message) const
{
    if (message[0] == NULL)
        std::cout << "* SCHREEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEECH *" << std::endl;
    else
    {
        for (size_t i = 0; message[i] != NULL; i++)
            std::cout << to_upper(message[i]);
        std::cout << std::endl;
    }
}

static char *to_upper(char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return (str);
}
