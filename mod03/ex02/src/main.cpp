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

#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    FragTrap frag("Frag");

    frag.attack("Enemy Frag");
    frag.printStatus();

    frag.takeDamage(20);
    frag.printStatus();

    frag.beRepaired(50);
    frag.printStatus();

    frag.highFivesGuys();
    frag.printStatus();

    FragTrap fragClone(frag);
    fragClone.setName("Clone1");
    fragClone.printStatus();

    FragTrap fragClone2;
    fragClone2 = frag;
    fragClone2.setName("Clone2");
    fragClone2.printStatus();

    frag.highFivesGuys();
    fragClone.highFivesGuys();
    fragClone2.highFivesGuys();

	std::cout << std::endl;

    return (0);
}
