/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:48:20 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/17 01:05:25 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

#include <iostream>
#include <sstream>

void cPrint(const std::string &str, int endl, t_color color)
{
	std::ostringstream oss;
	oss << color;

	std::cout << "\033[38;5;" << oss.str() << "m";
	std::cout << str << "\033[0m";
	if (endl)
		std::cout << std::endl;
}
