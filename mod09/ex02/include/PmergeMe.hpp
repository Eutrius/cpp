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

class PmergeMe
{
   public:
   private:
	PmergeMe(void);
	PmergeMe(const PmergeMe &other);
	~PmergeMe(void);
	PmergeMe &operator=(const PmergeMe &other);
};
