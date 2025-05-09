/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:29:25 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/09 11:46:55 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    std::string name = "Scav";
    ScavTrap scav(name);

    scav.attack("Dark " + name);
    scav.getStatus();

    scav.takeDamage(20);
    scav.getStatus();

    scav.beRepaired(50);
    scav.getStatus();

    scav.takeDamage(130);
    scav.attack("Dark " + name);
    scav.getStatus();

    scav.beRepaired(50);
    scav.getStatus();

    scav.guardGate();
    scav.getStatus();

    ScavTrap scavClone(scav);
    scavClone.getStatus();

    ScavTrap scavClone2;
    scavClone2 = scav;
    scavClone2.getStatus();

    return (0);
}
