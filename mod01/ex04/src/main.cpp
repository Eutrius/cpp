/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 10:01:11 by jyriarte          #+#    #+#             */
/*   Updated: 2025/04/20 15:09:22 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

static std::string replace(std::string line, std::string fromStr, std::string toStr);

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./zed filename fromString toString" << std::endl;
        return (1);
    }

    std::ifstream infile(argv[1]);
    if (!infile)
    {
        std::cerr << "Error: unable to open infile" << std::endl;
        return (1);
    }

    std::string outfileName = argv[1];
    outfileName += ".replace";
    std::ofstream outfile(outfileName.c_str());
    if (!outfile)
    {
        std::cerr << "Error: unable to create or open outfile" << std::endl;
        return (1);
    }

    std::string fromStr = argv[2];
    std::string toStr = argv[3];
    std::string line;
    while (std::getline(infile, line))
        outfile << replace(line, fromStr, toStr) << std::endl;

    infile.close();
    outfile.close();
    return (0);
}

static std::string replace(std::string line, std::string fromStr, std::string toStr)
{
    std::string res;

    for (size_t i = 0; i < line.length(); i++)
    {
        if (line.compare(i, fromStr.length(), fromStr) == 0)
        {
            res += toStr;
            i += fromStr.size() - 1;
        }
        else
            res += line[i];
    }
    return (res);
}
