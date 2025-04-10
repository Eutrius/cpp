/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:16:15 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/10 11:42:55 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string input;
	while (1)
	{
		std::cout << "Phonebook: ";
		if (!std::getline(std::cin, input))
			return (1);
		if (input == "ADD")
			std::cout << "ADD" << std::endl;
		else if (input == "SEARCH")
			std::cout << "SEARCH" << std::endl;
		else if (input == "EXIT")
			return (0);
	}
	return (0);
}
