/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:18:36 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/17 00:38:55 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int num)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), num);
	if (it != container.end())
		return (it);
	else
		throw std::runtime_error("Int not found");
}
