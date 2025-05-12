/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:29:25 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/10 15:24:54 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap("Clap");
    clap.printStatus();

    clap.attack("Dark Clap");
    clap.printStatus();

    clap.beRepaired(1);
    clap.printStatus();

    clap.takeDamage(1);
    clap.printStatus();

    ClapTrap clone(clap);
    clone.setName("ClapClone");
    clone.printStatus();

    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.printStatus();

    ClapTrap clone2;
    clone2 = clap;
    clone2.setName("AnotherClap");
    clone2.printStatus();

    clone2.takeDamage(100);
    clone2.printStatus();

    ScavTrap scav("Scav");
    scav.printStatus();

    scav.attack("Enemy Scav");
    scav.printStatus();

    scav.takeDamage(20);
    scav.printStatus();

    scav.beRepaired(50);
    scav.printStatus();

    scav.takeDamage(130);
    scav.attack("Enemy Scav");
    scav.printStatus();

    scav.beRepaired(50);
    scav.printStatus();

    scav.guardGate();
    scav.printStatus();

    ScavTrap scavClone(scav);
    scavClone.setName("Scav Clone");
    scavClone.printStatus();

    ScavTrap scavClone2;
    scavClone2 = scav;
    scavClone2.setName("AnotherScavClone");
    scavClone2.printStatus();

    return (0);
}
