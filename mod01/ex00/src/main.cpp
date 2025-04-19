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

#include "Zombie.h"
#include "Zombie.hpp"

int main(void)
{
    Zombie *michael = newZombie("Michael");
    michael->announce();
    delete michael;

    randomChump("Jackson");

    return (0);
}
