/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:50:28 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/19 15:04:41 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "zombie.h"

int main(void)
{
    int nZombies = 8;
    std::string zName = "Frank";
    Zombie *horde = zombieHorde(nZombies, zName);

    for (int i = 0; i < nZombies; i++)
        horde[i].announce();
    delete[] horde;

    return (0);
}
