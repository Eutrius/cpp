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
    (void)other;
}

PmergeMe::~PmergeMe(void)
{
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    (void)other;
    return (*this);
}

void PmergeMe::sortVec(std::vector<int> &vec)
{
    if (vec.size() < 2)
        return;

    std::vector<int> max;
    std::vector<int> min;

    for (size_t i = 0; i + 1 < vec.size(); i += 2)
    {
        int x = vec[i];
        int y = vec[i + 1];
        if (x < y)
            std::swap(x, y);
        max.push_back(x);
        min.push_back(y);
    }

    std::vector<int>::iterator bound;
    std::vector<int> sorted(max);
    PmergeMe::sortVec(sorted);

    for (std::vector<int>::iterator it = min.begin(); it != min.end(); it++)
    {
        bound = std::lower_bound(sorted.begin(), sorted.end(), *it);
        sorted.insert(bound, *it);
    }

    if (vec.size() % 2 != 0)
    {
        int leftover = vec[vec.size() - 1];
        bound = std::lower_bound(sorted.begin(), sorted.end(), leftover);
        sorted.insert(bound, leftover);
    }
    vec = sorted;
}

void PmergeMe::sortList(std::list<int> &list)
{
}
