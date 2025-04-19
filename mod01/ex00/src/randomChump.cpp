/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:19:31 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/19 15:01:23 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "Zombie.hpp"
#include <string>

void randomChump(std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}
