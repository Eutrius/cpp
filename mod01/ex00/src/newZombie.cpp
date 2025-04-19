/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:21:09 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/19 15:01:20 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "Zombie.hpp"
#include <string>

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}
