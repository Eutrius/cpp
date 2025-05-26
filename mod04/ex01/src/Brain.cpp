/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:25:05 by jyriarte          #+#    #+#             */
/*   Updated: 2025/05/13 14:44:51 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "utils.h"
#include <iostream>
#include <ostream>

Brain::Brain(void)
{
    cPrint("A Brain has been created");
}

Brain::Brain(const Brain &other)
{
    for (int i = 0; i < IDEAS; i++)
        _ideas[i] = other._ideas[i];
    cPrint("A Brain has been cloned");
}

Brain::~Brain(void)
{
    cPrint("A Brain has been destroyed");
}

Brain &Brain::operator=(const Brain &other)
{
    for (int i = 0; i < IDEAS; i++)
        _ideas[i] = other._ideas[i];
    cPrint("A Brain has been cloned");
    return (*this);
}
