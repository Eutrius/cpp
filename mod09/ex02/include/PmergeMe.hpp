/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 13:02:37 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/22 13:02:58 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>
#include <deque>
#include <vector>

class PmergeMe
{
   public:
	static void sortVec(std::vector<int> &vec);
	static void sortDeque(std::deque<int> &deque);

   private:
	PmergeMe(void);
	PmergeMe(const PmergeMe &other);
	~PmergeMe(void);

	PmergeMe &operator=(const PmergeMe &other);
};
