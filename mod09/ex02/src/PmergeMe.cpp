/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 13:03:04 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/24 22:48:18 by jyriarte         ###   ########.fr       */
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

	PmergeMe::sortVec(max);

	std::vector<int>::iterator bound;
	for (std::vector<int>::iterator it = min.begin(); it != min.end(); it++)
	{
		bound = std::lower_bound(max.begin(), max.end(), *it);
		max.insert(bound, *it);
	}

	if (vec.size() % 2 != 0)
	{
		int leftover = vec.back();
		bound = std::lower_bound(max.begin(), max.end(), leftover);
		max.insert(bound, leftover);
	}
	vec = max;
}

void PmergeMe::sortDeque(std::deque<int> &deque)
{
	if (deque.size() < 2)
		return;

	std::deque<int> max;
	std::deque<int> min;

	for (size_t i = 0; i + 1 < deque.size(); i += 2)
	{
		int x = deque[i];
		int y = deque[i + 1];
		if (x < y)
			std::swap(x, y);
		max.push_back(x);
		min.push_back(y);
	}

	PmergeMe::sortDeque(max);

	for (std::deque<int>::iterator it = min.begin(); it != min.end(); ++it)
	{
		std::deque<int>::iterator bound = std::lower_bound(max.begin(), max.end(), *it);
		max.insert(bound, *it);
	}

	if (deque.size() % 2 != 0)
	{
		int leftover = deque.back();
		std::deque<int>::iterator bound = std::lower_bound(max.begin(), max.end(), leftover);
		max.insert(bound, leftover);
	}

	deque = max;
}
