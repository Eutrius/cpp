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
    scavClone2.setName("AnotherScav");
    scavClone2.printStatus();

    FragTrap frag("Frag");
    frag.printStatus();

    frag.attack("Enemy Frag");
    frag.printStatus();

    frag.takeDamage(20);
    frag.printStatus();

    frag.beRepaired(50);
    frag.printStatus();

    frag.highFivesGuys();
    frag.printStatus();

    FragTrap fragClone(frag);
    fragClone.setName("FragClone");
    fragClone.printStatus();

    FragTrap fragClone2;
    fragClone2 = frag;
    fragClone2.setName("AnotherFrag");
    fragClone2.printStatus();

    frag.highFivesGuys();
    fragClone.highFivesGuys();
    fragClone2.highFivesGuys();

    std::cout << std::endl;

    DiamondTrap dia("Diam");
    dia.printStatus();

    dia.attack("Enemy Diam");
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
