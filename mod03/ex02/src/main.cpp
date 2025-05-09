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

#include "FragTrap.hpp"

int main(void)
{
    std::string name = "Frag";
    FragTrap frag(name);

    frag.attack("Dark " + name);
    frag.getStatus();

    frag.takeDamage(20);
    frag.getStatus();

    frag.beRepaired(50);
    frag.getStatus();

    frag.highFivesGuys();
    frag.getStatus();

    FragTrap scavClone(frag);
    scavClone.getStatus();

    FragTrap scavClone2;
    scavClone2 = frag;
    scavClone2.getStatus();

    return (0);
}
