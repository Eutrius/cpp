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
#include <string>

int	main(void)
{
	Phonebook	phonebook;

	std::string input;
	while (1)
	{
		if (!std::cin.eof())
			std::cout << "Phonebook: ";
		if (!std::getline(std::cin, input))
			return (1);
		else if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			return (0);
	}
	return (0);
}
