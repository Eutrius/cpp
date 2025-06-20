/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:18:50 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/18 18:12:50 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	std::string datafile = "test.csv";
	std::string inputfile = "";

	if (argc > 2)
		inputfile = argv[2];

	BitcoinExchange *dex;
	try
	{
		dex = new BitcoinExchange("test.csv");
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::ifstream file(datafile.c_str());

	if (!file)
	{
		std::cerr << "Error: could not open file." << std::endl;
		delete dex;
		return (1);
	}
	return (0);
}
