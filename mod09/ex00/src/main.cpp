/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:18:50 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/21 15:28:19 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    std::string datafile = "data.csv";
    std::string inputfile = "";

    if (argc >= 2)
        inputfile = argv[1];

    BitcoinExchange *dex;
    try
    {
        dex = new BitcoinExchange(datafile);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }

    std::ifstream file(inputfile.c_str());
    if (!file)
    {
        std::cerr << "Error: could not open file." << std::endl;
        delete dex;
        return (1);
    }

    std::string line;
    std::getline(file, line);
    if (line != "date | value")
    {
        std::cerr << "Error: input file corrupted." << std::endl;
        delete dex;
        return (1);
    }

    while (std::getline(file, line))
        dex->exchange(line);

    delete dex;

    return (0);
}
