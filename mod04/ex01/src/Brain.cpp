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

Brain::Brain(void)
{
    cPrint("A brain has been created");
}

Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
    cPrint("A brain has been cloned");
}

Brain::~Brain(void)
{
    cPrint("A brain has been destroyed");
}

Brain &Brain::operator=(const Brain &other)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
    cPrint("A brain has been cloned");
    return (*this);
}

const std::string *Brain::getIdeas(void) const
{
    return (&_ideas[0]);
}
