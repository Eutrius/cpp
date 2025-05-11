/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:29:25 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/10 15:19:08 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    DiamondTrap dia("Frag");

    dia.attack("Enemy Frag");
    dia.printStatus();

    dia.takeDamage(20);
    dia.printStatus();

    dia.beRepaired(50);
    dia.printStatus();

    dia.highFivesGuys();
    dia.printStatus();

    dia.guardGate();
    dia.printStatus();

    dia.whoAmI();

    std::cout << std::endl;

    return (0);
}
