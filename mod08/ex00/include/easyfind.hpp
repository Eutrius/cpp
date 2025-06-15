/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:18:36 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/15 12:17:45 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <stdexcept>

template <typename T> typename T::const_iterator easyfind(const T &container, int num)
{
    typename T::const_iterator it;
    it = std::find(container.begin(), container.end(), num);
    if (it != container.end())
        return (it);
    else
        throw std::runtime_error("Value not found");
}
