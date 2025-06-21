/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:18:50 by jyriarte          #+#    #+#             */
/*                                                                            */
/*   Updated: 2025/06/21 15:14:44 by jyriarte         ###   ########.fr       */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: there must be only 1 argument" << std::endl;
		return (1);
	}
	RPN::solve(argv[1]);
	return (0);
}
