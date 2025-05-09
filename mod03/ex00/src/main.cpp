/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:29:25 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/07 14:52:46 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::string name = "Clap";

    ClapTrap clap(name);
    clap.getStatus();

    clap.attack("Dark" + name);
    clap.getStatus();

    clap.beRepaired(1);
    clap.getStatus();

    clap.takeDamage(1);
    clap.getStatus();

    std::string cloneName = "Clone";
    ClapTrap clone(clap);
    clone.setName(cloneName);
    clone.getStatus();

    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.beRepaired(1);
    clone.getStatus();

    std::string anotherClone = "anotherClone";
    ClapTrap clone2;
    clone2 = clap;
    clone2.setName(anotherClone);
    clone2.getStatus();

    clone2.takeDamage(100);
    clone2.getStatus();

    clone2.attack("Dark " + anotherClone);
    clone2.beRepaired(5);
    clone2.getStatus();

    clone2.attack("Dark " + anotherClone);
    clone2.getStatus();
    return (0);
}
