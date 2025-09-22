/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:06:44 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/10 16:11:58 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void iter(T *arr, int len, void(f)(T &))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void iter(const T *arr, int len, void(f)(const T &))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}
