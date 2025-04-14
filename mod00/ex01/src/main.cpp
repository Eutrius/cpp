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

#include "phonebook.hpp"
#include <iostream>

int	main(void)
{
	Phonebook	phonebook;

	std::string input;
	while (42)
	{
		if (!std::cin || std::cin.eof())
		{
			std::cerr << "\nError: input failed" << std::endl;
			return (1);
		}
		std::cout << "Phonebook: ";
		if (!std::getline(std::cin, input))
			continue ;
		else if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			break ;
	}
	return (0);
}
