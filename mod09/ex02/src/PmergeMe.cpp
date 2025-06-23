/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 13:03:04 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/22 13:04:43 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	(void) other;
}

PmergeMe::~PmergeMe(void)
{
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	(void) other;
	return (*this);
}
