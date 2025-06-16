/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:39:05 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/10 16:39:07 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

void printInt(int x)
{
	std::cout << x << " ";
}

void printFloat(float x)
{
	std::cout << x << " ";
}

void printChar(char x)
{
	std::cout << x << " ";
}

int main(void)
{
	int a[] = {1, 2, 3, 4};
	float b[] = {1.1f, 2.2f, 3.3f};
	char c[] = {'a', 'b', 'c', 'd'};

	::iter(a, 4, printInt);
	std::cout << std::endl;
	::iter(b, 3, printFloat);
	std::cout << std::endl;
	::iter(c, 4, printChar);
	std::cout << std::endl;

	return (0);
}
